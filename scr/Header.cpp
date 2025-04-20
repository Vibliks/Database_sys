#include "Header.h"
#include <iostream>
#include <sstream>
#include <cctype>
#include <algorithm>

std::vector<std::string> split(const std::string& input, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(input);
    std::string token;

    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
}


bool is_bool(const std::string& s) {
    return s == "true" || s == "false";
}

bool is_int(const std::string& s) {
    if (s.empty()) return false;
    size_t i = 0;
    if (s[0] == '-' || s[0] == '+') i = 1;
    return i < s.size() && std::all_of(s.begin() + i, s.end(), ::isdigit);
}

bool is_double(const std::string& s) {
    std::istringstream iss(s);
    double d;
    iss >> std::noskipws >> d;
    return iss.eof() && !iss.fail();
}

std::string what_type(const std::string& input) {
    if (is_bool(input)) return "bool";
    if (is_int(input)) return "int";
    if (is_double(input)) return "double";
    return "string";
}


std::vector<std::string> header(const std::string& input) {
    std::vector<std::string> result;
    for (const auto& token : split(input, ',')) {
        std::cout << token << " => " << what_type(token) << std::endl;
        result.push_back(what_type(token));
    }
    return result;
}
