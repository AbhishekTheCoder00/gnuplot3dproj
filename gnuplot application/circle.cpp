#include "circle.h"
#include <cmath>

Circle::Circle(double x, double y, double radius)
    : x(x), y(y), radius(radius) {}

void Circle::writeToFile(std::ofstream& file, int numPoints) {
    for (int i = 0; i <= numPoints; ++i) {
        double angle = 2.0 * M_PI * i / numPoints;
        file << x + radius * cos(angle) << " " << y + radius * sin(angle) << "\n";
    }
    file << x + radius << " " << y << "\n\n";  // Close the circle
}
