// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program displays the middle grade of each mark

#include <iostream>
#include <string>

int FindMiddle(std::string levelMark) {
    // Finds middle grade

    // Declaring grade
    int grade;

    // Process and output
    if (levelMark == "4+") {
        grade = 97;
    } else if (levelMark == "4") {
        grade = 90;
    } else if (levelMark == "4-") {
        grade = 83;
    } else if (levelMark == "3+") {
        grade = 78;
    } else if (levelMark == "3") {
        grade = 75;
    } else if (levelMark == "3-") {
        grade = 71;
    } else if (levelMark == "2+") {
        grade = 68;
    } else if (levelMark == "2") {
        grade = 65;
    } else if (levelMark == "2-") {
        grade = 61;
    } else if (levelMark == "1+") {
        grade = 58;
    } else if (levelMark == "1") {
        grade = 55;
    } else if (levelMark == "1-") {
        grade = 51;
    } else if (levelMark == "R") {
        grade = 25;
    } else {
        grade = -1;
    }

    return grade;
}


main() {
    // This function calls FindMiddle

    // Declaring variables
    std::string levelMark;
    int percentage;

    // Input
    std::cout << "Enter the grade level you wanted converted to a percentage: ";
    std::cin >> levelMark;

    // Function call
    percentage = FindMiddle(levelMark);

    // Process and Output
    if (percentage == -1) {
        std::cout << "Invalid mark" << std::endl;
    } else {
        std::cout << "The middle percentage of " << levelMark << " is "
        << percentage << "%." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
