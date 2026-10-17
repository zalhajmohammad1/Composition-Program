# Computer Hardware Simulator - Object Composition

This is a C++ project I built to practice Object-Oriented Design (OOD) principles—specifically focusing on **Object Composition**. Instead of cramming all logic into a single monolithic class, the project breaks down a computer into its standalone hardware components and brings them together under a single controller class.

## Object-Oriented Blueprint
This project is built around the "Has-A" relationship model, where the main `Computer` orchestrates data passing between isolated components:
* **Central Processing Unit (CPU):** Handles string decoding logic using raw speeds modeled in MHz.
* **Graphics Card (GPU):** Manages rendering outputs and VRAM specification tracking.
* **Hard Drive:** Utilizes an internal `std::map` key-value lookup system to simulate writing, reading, and storing persistent text data.
* **Memory (RAM):** Acts as a volatile data buffer to temporarily hold active code strings before they are piped into the CPU.

## Key Concepts Demonstrated
* **Composition:** The `Computer` lifetime strictly controls the lifetime of its inner component objects. If the computer object is destroyed, its hardware components go with it.
* **Encapsulation:** Hardware data states (brands, speeds, storage capacities) are kept entirely private, exposed only through safe setter and getter methods.
* **Standard Library Mapping:** Uses `std::map` to handle file-system tracking mechanics within the storage driver.

## Tech Used
* C++
* CMake (for CLion setup)

## How to Run
1. Clone this repo to your machine.
2. Open the project folder directly in CLion.
3. Let CMake sync the header guards, then compile and run the main entry point.
