#ifndef COMPOSITION_COMPUTER_H
#define COMPOSITION_COMPUTER_H
#include "Memory.h"
#include "Graphics_card.h"
#include "Harddrive.h"
#include "Central_processing_unit.h"

/**
 * @class Computer
 * @brief Represents a computer
 */
class Computer {

private:
Memory memoryComponent; //private members of the computer object are different objects of different classes
Graphics_card GPU;      //which demonstrates composition
Harddrive hardDrive;
Central_processing_unit CPU;



public:

    /**
     * parameterized constructor
     * @param memory_brand // sets the memory brand
     * @param memory_size // sets the memory size
     * @param GPU_brand // sets the graphics card brand
     * @param GPU_size // sets the processor unit size
     * @param HD_brand // sets the hard drive brand
     * @param HD_size // sets the hard drive size
     * @param CPU_brand // sets the processing unit brand
     * @param CPU_speed // sets the processing unit speed
     */
    Computer(std::string memory_brand, int memory_size,
             std::string GPU_brand, int GPU_size,
             std::string HD_brand, int HD_size,
             std::string CPU_brand, double CPU_speed);
    /**
     *mutator method turns on the computer
     */
    void turnOn();
    /**
     * mutator method which turns off the computer
     */
    void turnOff();
    /**
     * method which saves content into the hard drive
     * @param name // takes in the name
     * @param content // takes in contents
     */
    void save(std::string name, std::string content);
    /**
     * method which runs stored contents
     * @param name // takes in the name
     */
    void run(std::string name);


};


#endif //COMPOSITION_COMPUTER_H
