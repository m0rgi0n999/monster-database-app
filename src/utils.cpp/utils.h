// utils.h
#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>

std::vector<std::string> readFile(const std::string& filename);
bool validateInput(const std::string& input);

#endif // UTILS_H