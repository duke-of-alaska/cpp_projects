#include <iostream>

using str_t = std::string;

void convFromC(int temp);

int main(){
    int temp;

    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temp;

    convFromC(temp);

}

void convFromC(int temp){
    double result = temp * (9.0/5.0) + 32;
    std::cout << temp << " degrees Celsius = " << result << " degrees Fahrenheit." << '\n';
}