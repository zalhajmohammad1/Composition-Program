#include <string>
#ifndef COMPOSITION_GRAPHICS_CARD_H
#define COMPOSITION_GRAPHICS_CARD_H

/**
 * @class Graphics_card
 * @brief Represents a graphics card
 */
class Graphics_card {
private:
    std::string brand;
    int size;

public:
    /**
     * parameterized constructor
     * @param brand // sets the ram brand for a ram object
     * @param ramSize // sets the ram size for a ram object
     */
    Graphics_card(std::string brand, int ramSize);
    /**
     * method that reads specs of the GPU
     * @return returns GPU spec information in a string format
     */
    std::string spec() const;
    /**
     * method that outputs decoded content
     */
    void print(std::string) const;


};


#endif //COMPOSITION_GRAPHICS_CARD_H
