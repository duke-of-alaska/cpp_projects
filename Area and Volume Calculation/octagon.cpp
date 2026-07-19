#include <iostream>
#include <cmath>

double calculateArea(double length);
double calculateVolume(double length, double height);

int main(){
    double length;

    std::cout << "What is the length of the octagon in cm? ";
    std::cin >> length;

    double height;
    std::cout << "What is the height of the octagon in cm? ";
    std::cin >> height;

    double areaResult = calculateArea(length);
    std::cout << areaResult << "cm^2" << '\n';

    double volumeResult = calculateVolume(length, height);
    std::cout << volumeResult << "cm^3" << '\n';

}

double calculateArea(double length){
    return 2 * (1 + std::sqrt(2)) * (length * length);
}

double calculateVolume(double length, double height){
    return calculateArea(length) * height;
}