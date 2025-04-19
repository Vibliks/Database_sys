#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <vector>
#include <sstream>

std::vector<std::string> split(const std::string& input, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(input);
    std::string token;

    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
}

//template<typename T>
std::vector<std::string> header(std::string input) {
    std::vector<std::string>(intput);
    // return split(input, '\n');
}

void DDL_add_csv(std::string input, std::string filename) {
    std::filesystem::path filepath = std::filesystem::current_path().parent_path() / filename;

    if (!std::filesystem::exists(filepath)) {
        std::cout << "File has been generated\n";
        header(input);

    } else {
        std::cout << "File is beaning updated\n";
    }
    //std::string input = "1,Alice,30,true";

    std::ofstream outFile(filepath, std::ios::app);
    if (outFile.is_open()) {
        outFile << input << "\n";
        // for(auto const& field : fields) {
        //     outFile << field << ",";
        //}
        outFile.close();
        std::cout << "CSV row added successfully.\n";
    } else {
        std::cerr << "Unable to open file for writing.\n";
    }
}

void DDL_replace_csv(std::string input,std::string filename) {
    std::filesystem::path filepath = std::filesystem::current_path().parent_path() / filename;
    std::cout << "Current path: " << std::filesystem::current_path().parent_path() << "\n";

    std::vector<std::string> fields = split(input, ',');
    std::ofstream outFile(filepath);
    if (outFile.is_open()) {
        outFile << input;
        outFile.close();
        std::cout << "File written successfully.\n";
    } else {
        std::cerr << "Unable to open file for writing.\n";
    }
}

void DDL_delete_csv(std::string filename) {
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

void DDL_merge_csv(std::string newfilename, std::string filename1, std::string filename2, bool delete1n2) {
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
            DDL_delete_csv(filename1);
            DDL_delete_csv(filename2);
        }

        std::cout << "Files merged successfully.\n";
    } else {
        std::cerr << "Unable to open one of the files for reading/writing.\n";
    }
}

void package_tool() {

}


int main() {
    DDL_delete_csv("data.csv");
    DDL_add_csv("1,Alice,30,true", "data.csv");
    DDL_add_csv("2,Bob,25,true", "data.csv");
    return 0;
}
