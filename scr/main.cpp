#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>  // C++17

void DDL_add(std::string input,std::string filename) {
    std::filesystem::path filepath = std::filesystem::current_path().parent_path() / filename;
    std::cout << "Current path: " << std::filesystem::current_path().parent_path() << "\n";

    std::ofstream outFile(filepath, std::ios::app);
    if (outFile.is_open()) {
        outFile << input;
        outFile.close();
        std::cout << "File written successfully.\n";
    } else {
        std::cerr << "Unable to open file for writing.\n";
    }
}

void DDL_replace(std::string input,std::string filename) {
    std::filesystem::path filepath = std::filesystem::current_path().parent_path() / filename;
    std::cout << "Current path: " << std::filesystem::current_path().parent_path() << "\n";

    std::ofstream outFile(filepath);
    if (outFile.is_open()) {
        outFile << input;
        outFile.close();
        std::cout << "File written successfully.\n";
    } else {
        std::cerr << "Unable to open file for writing.\n";
    }
}

void DDL_delete(std::string filename) {
    std::filesystem::path filepath = std::filesystem::current_path().parent_path() / filename;

    if (std::filesystem::exists(filepath)) {
        if (std::filesystem::remove(filepath)) {
            std::cout << "File deleted successfully.\n";
        } else {
            std::cerr << "Failed to delete the file.\n";
        }
    } else {
        std::cerr << "File does not exist.\n";
    }
}

void DDL_merge(std::string newfilename, std::string filename1, std::string filename2, bool delete1n2) {
    std::filesystem::path filepath = std::filesystem::current_path().parent_path();
    std::filesystem::path filepath1 = filepath / filename1;
    std::filesystem::path filepath2 = filepath / filename2;
    std::filesystem::path newfilepath = filepath / newfilename;
    if (std::filesystem::exists(newfilepath)) {
        std::cout << newfilename << "Already exists.\n";
    }
    std::ifstream inFile1(filepath1);
    std::ifstream inFile2(filepath2);
    std::ofstream newoutFile(newfilepath);

    if (newoutFile.is_open() && inFile1.is_open() && inFile2.is_open()) {
        std::string line;

        // Copy content of file 1
        while (std::getline(inFile1, line)) {
            newoutFile << line << "\n";
        }

        // Copy content of file 2
        while (std::getline(inFile2, line)) {
            newoutFile << line << "\n";
        }

        inFile1.close();
        inFile2.close();
        newoutFile.close();

        if (delete1n2) {
            DDL_delete(filename1);
            DDL_delete(filename2);
        }

        std::cout << "Files merged successfully.\n";
    } else {
        std::cerr << "Unable to open one of the files for reading/writing.\n";
    }
}





// int main() {
//     std::string input = "Hello, world!\n";
//     std::string filename = "test.txt";
//     std::string input2 = "Hello, world2!\n";
//     std::string filename2 = "test2.txt";
//     std::string filename3 = "test3.txt";
//     DDL_delete(filename);
//     DDL_delete(filename2);
//     DDL_add(input, filename);
//     DDL_add(input2, filename2);
//     DDL_merge(filename3,filename,filename2,false);
//     //DDL_delete(filename);
//     return 0;
// }
