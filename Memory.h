
#ifndef COMPOSITION_MEMORY_H
#define COMPOSITION_MEMORY_H
#include <string>

/**
 * @class Memory
 * @brief Represents a memory in a computer
 */
class Memory {
private:
    std::string brand;
    int size;
    std::string code;

public:
    /**
     * Parameterized constructor
     * @param brand // Sets the brand of the memory object
     * @param size // ets the size of the memory object
     */
    Memory(std::string brand, int size);
    /**
     * getter method which returns specs of the memory
     * @return returns specs of a memory in a string format
     */
    std::string spec() const;
    /**
     * method that loads code into the code member variable
     */
    void load(std::string);
    /**
     * getter method that returns the code stored in 'code'
     * @return returns 'code'
     */
    std::string read() const;

};


#endif //COMPOSITION_MEMORY_H
