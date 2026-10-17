#ifndef COMPOSITION_HARDDRIVE_H
#define COMPOSITION_HARDDRIVE_H
#include <iostream>
#include <map>

/**
 * @class Hard drive
 * @brief Represents a hard drive
 */
class Harddrive {

private:
    std::string brand;
    int size;
    std::map<std::string, std::string> programs;

public:
    /**
     * Parameterized constructor
     * @param brand // sets the hard drive's brand
     * @param size // sets the hard drive's size
     */
    Harddrive(std::string brand, int size);
    /**
     * getter method that returns specs of the hard drive
     * @return returns specs about a hard drive in a string format
     */
    std::string spec() const;
    /**
     * method which saves content into the 'programs' map
     * @param name // Takes in the name of the program
     * @param contents // Takes in the contents of the program
     */
    void save(std::string name, std::string contents);
    /**
     * getter that prints content from the map
     * @param name // Takes in the name of the program
     * @return returns the name part of the map from hard drive
     */
    std::string read(std::string name) const;


};


#endif //COMPOSITION_HARDDRIVE_H
