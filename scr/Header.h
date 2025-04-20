#ifndef HEADER_H
#define HEADER_H

#include <vector>
#include <string>

std::vector<std::string> split(const std::string& input, char delimiter);
std::vector<std::string> header(const std::string& input);

#endif