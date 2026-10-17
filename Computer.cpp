#include "Memory.h"
#include "Computer.h"
#include "Graphics_card.h"
#include "Central_processing_unit.h"
#include "Harddrive.h"
#include <iostream>
#include <sstream>
Computer::Computer(std::string memory_brand, int memory_size, std::string GPU_brand, int GPU_size, std::string HD_brand,
                   int HD_size, std::string CPU_brand, double CPU_speed):
        memoryComponent(memory_brand, memory_size),
        GPU(GPU_brand, GPU_size),
        hardDrive(HD_brand, HD_size),
        CPU(CPU_brand, CPU_speed) {}



void Computer::turnOn() {
    std::stringstream ss;
    ss << "The computer is starting up.." << std::endl;
    ss << "Memory: " << memoryComponent.spec();
    ss << "Graphics Card: " << GPU.spec();
    ss << "Hard Drive: " << hardDrive.spec();
    ss << "Central Processing Unit: " << CPU.spec();
    GPU.print(ss.str());

}

void Computer::turnOff() {

    std::cout << "The computer is shutting down..." << std::endl;
}

void Computer::save(std::string name, std::string content) {
    hardDrive.save(name, content);
}

void Computer::run(std::string name) {
    //Load the program from the hard drive
    std::string content = hardDrive.read(name);
    //Put the program in memory
    memoryComponent.load(content);
    //Decode the program
    std::string result = CPU.decode(memoryComponent.read());
    //Sending the results to the graphics card for printing
    GPU.print(result);




}