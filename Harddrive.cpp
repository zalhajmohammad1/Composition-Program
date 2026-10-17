#include "Harddrive.h"
#include <sstream>

Harddrive::Harddrive(std::string brand, int size) {
    this->brand = brand;
    this->size = size;
}

std::string Harddrive::spec() const {
    std::stringstream ss;
    ss << brand << "Hard drive with " << size << "GBs of space. " << std::endl;
    return ss.str();
}

void Harddrive::save(std::string name, std::string contents) {
    programs[name] = contents;
}

std::string Harddrive::read(std::string name) const {
    return programs.at(name);
}

