// Copyright 2025 Mikhail Ibrahim
// Date: Mar 6, 2025
// Description: A C++ program that
// Calculates the area and perimeter of a circle,
// based on user input for the radius.

#include <cmath>
#include <iostream>

// This program calculates the area and perimeter of a circle
// using a given radius

void CalculateCircle(double radius, double* area, double* perimeter) {
    // Constants
    const double PI = 3.141592653589793;

    // Calculate area and perimeter
    *area = PI * std::pow(radius, 2);
    *perimeter = 2 * PI * radius;
}

int main() {
    double radius, area, perimeter;

    // Prompt user for radius input
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Function call to calculate area and perimeter
    CalculateCircle(radius, &area, &perimeter);

    // Display results
    std::cout << "Area: " << area << "\n";
    std::cout << "Perimeter: " << perimeter << "\n";

    return 0;
}
