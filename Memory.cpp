#include <sstream>
#include "Memory.h"

Memory::Memory(std::string brand, int size) {
    this->brand = brand;
    this->size = size;
    this->code = "";
}

std::string Memory::spec() const {

    std::stringstream ss;
    ss << brand << " Memory of size " << size << "GB" << std::endl;

        return ss.str();

}

void Memory::load(std::string code) {
    this->code = code;
}

std::string Memory::read() const {

        return code;
}