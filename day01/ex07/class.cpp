#include "class.hpp"

Sed::Sed(std::string const &fileOld, std::string const &s1, std::string const &s2) {
    this->fileNewName = fileOld + ".replace";
    this->fileOld.open(fileOld);
    this->s1 = s1;
    this->s2 = s2;
}

int Sed::check() {
    if (this->s1.empty() || this->s2.empty()) {
        std::cerr << RED BOLD "Invalid argument" << std::endl;
        return 1;
    }
    if (!this->fileOld.is_open()) {
        std::cerr << RED BOLD "Destination file opening or creating error" << std::endl;
        return 1;
    }
    return 0;
}

int Sed::replace() {
    std::ofstream           fileNew(this->fileNewName);
    std::string             buffer_line;
    std::string::size_type  pointer = 0;

    if (!fileNew.is_open()) {
        std::cerr << RED BOLD "Destination file opening or creating error" << std::endl;
        return (1);
    }
    while(std::getline(this->fileOld, buffer_line)) {
        pointer = 0;
        while ((pointer = buffer_line.find(this->s1, pointer)) != std::string::npos) {
            buffer_line.replace(pointer, this->s1.length(), this->s2);
            pointer += this->s1.length();
        }
        fileNew << buffer_line << std::endl;
    }
    fileNew.close();
    return (0);
}

Sed::~Sed() {
    this->fileOld.close();
}