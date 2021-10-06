// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program will print all possible combinations of RGB

#include <iostream>

int main() {
    // This program will print all possible combinations of RGB
    for (int counterR = 0; counterR <= 255; counterR++) {
        for (int counterG = 0; counterG <= 255; counterG++) {
            for (int counterB = 0; counterB <= 255; counterB++) {
                std::cout << "RGB (" << counterR << ", " << counterG
                << ", " << counterB << ")" << std::endl;
            }
        }
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
