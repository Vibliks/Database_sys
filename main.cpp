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

int main() {
    std::string input = "Hello, world!\n";
    std::string filename = "test.txt";
    DDL_add(input, filename);
    DDL_delete(filename);
    //DDL_delete(filename);
    return 0;
}
