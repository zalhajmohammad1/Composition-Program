#ifndef COMPOSITION_CENTRAL_PROCESSING_UNIT_H
#define COMPOSITION_CENTRAL_PROCESSING_UNIT_H
#include <string>

/**
 * @class Central_processing_unit
 * @brief Represents a processing unit (CPU)
 */
class Central_processing_unit {

private:
    std::string brand;
    double speed; //in mhz

public:
    /**
     * Parameterized constructor
     * @param brand // Sets the brand of the CPU object
     * @param speed // Sets the speed of the CPU object (in mhz)
     */
    Central_processing_unit(std::string brand, double speed);
    /**
     * Getter method that returns the specs of a CPU object
     * @return returns the CPU specs in a string format
     */
    std::string spec() const;
    /**
     * Getter method that returns decoded ascii values
     * @param code // Takes in ascii code
     * @return returns 'output'
     */
    std::string decode (std::string code) const;


};


#endif //COMPOSITION_CENTRAL_PROCESSING_UNIT_H
