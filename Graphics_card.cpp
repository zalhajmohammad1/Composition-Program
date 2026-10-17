#include "Graphics_card.h"
#include <iostream>
#include <sstream>

Graphics_card::Graphics_card(std::string brand, int ramSize){
    this->brand = brand;
    this->size = ramSize;
}

std::string Graphics_card::spec() const {
    std::stringstream ss;
    ss << " Graphics card with " << size << " of VRAM" << std::endl;

         return ss.str();
}

void Graphics_card::print(const std::string output) const {
    std::cout << output << std::endl;
}