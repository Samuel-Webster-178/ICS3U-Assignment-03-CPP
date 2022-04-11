// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on March 2022
// Tells user which quadrant a coordinate pair is in

#include <iostream>
#include <random>

int main() {
    // I check if the user guessed correctly
    std::string stringYCoordinate;
    std::string stringXCoordinate;
    int intYCoordinate;
    int intXCoordinate;

    // input
    std::cout << "Please enter X coordinate: ";
    std::cin >> stringXCoordinate;
    std::cout << "Please enter Y coordinate: ";
    std::cin >> stringYCoordinate;

    // process & output
    try {
        intXCoordinate = std::stoi(stringXCoordinate);
        intYCoordinate = std::stoi(stringYCoordinate);
        if (intXCoordinate > 0) {
            if (intYCoordinate > 0) {
                std::cout << "Point is in the 1st quadrant.";
            } else if (intYCoordinate < 0) {
                std::cout << "Point is in the 4th quadrant.";
            } else {
                std::cout << "On y axis";
            }
        } else if (intXCoordinate < 0) {
            if (intYCoordinate > 0) {
                std::cout << "Point is in the 2nd quadrant.";
            } else if (intYCoordinate < 0) {
                std::cout << "Point is in the 3rd quadrant.";
            } else {
                std::cout << "On y axis";
            }
        } else {
            std::cout << "On x axis";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter integers!";
    }
    std::cout << "\n\nDone." << std::endl;
}
