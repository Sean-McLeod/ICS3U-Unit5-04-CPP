// Copyright (c) 2021 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on January 2021
// This program calculates the volume of a cylinder

#include <iostream>
#include <string>
#include <cmath>

float CylinderVolume(int radius, int height) {
    // this function calculates the volume of a cylinder
    float volume;

    volume = M_PI*pow(radius, 2)*height;

    return volume;
}


main() {
    // this function gets radius and height
    std::string userRadius;
    std::string userHeight;
    int intUserRadius;
    int intUserHeight;
    float finalCylinderVolume;

    std::cout << "This program calculates the volume of a cylinder"
              << "\n" << std::endl;

    // input
    std::cout << "Enter in a radius(mm): ";
    std::cin >> userRadius;
    std::cout << "Enter in a height(mm):";
    std::cin >> userHeight;
    std::cout << std::endl;

    try {
        intUserRadius = std::stoi(userRadius.c_str());
        intUserHeight = std::stoi(userHeight.c_str());

        if (intUserRadius > 0 && intUserHeight > 0) {
            // call functions
            finalCylinderVolume = CylinderVolume(intUserRadius, intUserHeight);

            // output
            std::cout << "The volume is " << finalCylinderVolume << "mm²"
                      << std::endl;
        } else {
            std::cout << "The values should be positive" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "This is an invalid number" << std::endl;
    }
}
