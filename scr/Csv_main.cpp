#include "Header.h"
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <vector>
#include <set>



std::filesystem::path get_data_filepath( std::string filename) {
    std::filesystem::path filepath = std::filesystem::current_path().parent_path() / "data" / filename;
    std::filesystem::create_directories(filepath.parent_path()); // Ensure "data" folder exists
    return filepath;
}

void DDL_add_csv( std::string input,  std::string filename) {
    std::filesystem::path filepath = get_data_filepath(filename);
    std::string header_line;
    if (!std::filesystem::exists(filepath)) {
        std::cout << "File has been generated.\n";
        std::vector<std::string> column_header = header(input); // Just as a placeholder call for now
        for (const auto& column : column_header) {
            std::cout << column << "\n";
            header_line += column + ",";
        }
        if (!header_line.empty()) {
            header_line.pop_back();
        }
    } else {
        std::cout << "File is being updated.\n";
    }

    std::ofstream outFile(filepath, std::ios::app);
    if (outFile.is_open()) {
        outFile << header_line << "\n";
        outFile << input << "\n";
        outFile.close();
        std::cout << "CSV row added successfully.\n";
    } else {
        std::cerr << "Unable to open file for writing.\n";
    }
}

void DDL_replace_csv( std::string input,  std::string filename) {
    std::filesystem::path filepath = get_data_filepath(filename);
    std::string header_line;

    std::vector<std::string> column_header = header(input); // Just as a placeholder call for now
    for (const auto& column : column_header) {
        std::cout << column << "\n";
        header_line += column + ",";
    }
    if (!header_line.empty()) {
        header_line.pop_back();
    }



    std::ofstream outFile(filepath);
    if (outFile.is_open()) {
        outFile << header_line << "\n";
        outFile << input << "\n";
        outFile.close();
        std::cout << "File written successfully.\n";
    } else {
        std::cerr << "Unable to open file for writing.\n";
    }
}

void DDL_delete_csv( std::string filename) {
    std::filesystem::path filepath = get_data_filepath(filename);

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

void DDL_merge_csv( std::string newfilename,  std::string filename1,  std::string filename2, bool delete1n2) {
    std::filesystem::path filepath1 = get_data_filepath(filename1);
    std::filesystem::path filepath2 = get_data_filepath(filename2);
    std::filesystem::path newfilepath = get_data_filepath(newfilename);

    if (std::filesystem::exists(newfilepath)) {
        std::cout << newfilename << " already exists.\n";
        return;
    }

    std::ifstream inFile1(filepath1);
    std::ifstream inFile2(filepath2);
    std::ofstream newoutFile(newfilepath);

    if (newoutFile.is_open() && inFile1.is_open() && inFile2.is_open()) {
        std::string line;

        while (std::getline(inFile1, line)) {
            newoutFile << line << "\n";
        }

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
template <typename T>
void DDL_add_column(std::string Type, T input, T defult, std::set<int> in_which_lines) {

}


int main() {
    DDL_delete_csv("data.csv");
    //DDL_add_csv("1,Alice,30,true", "data.csv");
    //DDL_add_csv("2,Bob,25,true", "data1.csv");
    //header("1,Alice,30,true");
    DDL_replace_csv("1,Alice,30,true","data.csv");
    // DDL_merge_csv("merged.csv", "data1.csv", "data2.csv", true);

    return 0;
}
