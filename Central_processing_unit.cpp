#include "Central_processing_unit.h"
#include <sstream>

Central_processing_unit::Central_processing_unit(std::string brand, double speed) {
    this->brand = brand;
    this->speed = speed;
}

std::string Central_processing_unit::spec() const {
    std::stringstream ss;
    ss << brand << "CPU " << speed << "Mhz" << std::endl;
    return ss.str();
}

std::string Central_processing_unit::decode(std::string code) const {
    //Create a string for output
    std::string output = "";
    //From the input string create an input string stream (like cin >>)
    std::istringstream iss(code);
    int ascii_value; //Holds Ascii integer values

    //Loop through each ascii code in the output and
    //convert it to a char, appending it to the output
    while (iss >> ascii_value) {
        if (ascii_value > 0 && ascii_value < 127) {
            output.push_back(static_cast<char>(ascii_value));
        }
    }
    return output;
}