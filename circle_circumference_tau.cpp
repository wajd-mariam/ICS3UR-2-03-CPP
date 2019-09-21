// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:September 2019
// This program calculates the circumference of the circle using TAU


#include <iostream>

int main() {
    // this function calculates the circumference of the circle
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter the radius of the circle (mm):";
    std::cin >> radius;

    // process
    circumference = TAU * radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "The circumference is " << circumference << "mm" << std::endl;
}
