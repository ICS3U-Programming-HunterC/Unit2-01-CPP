// Copyright (c) 2022 Hunter Connolly All rights reserved
//
// Created by: Hunter Connolly
// February 28, 2022
// This program uses libraries and calculates
// the area and circumference of a circle
// with a radius of 15mm

#include <iostream>
#include <cmath>

int main() {
    std::cout << "If a circle has a radius\n";
    std::cout << "of 15mm\n";
    std::cout << " \n";
    std::cout << "The Area is: " << (M_PI*pow(15, 2)) << "mm^2\n";
    std::cout << "The Circumference is: " << (2*M_PI*15) << "mm\n";
}
