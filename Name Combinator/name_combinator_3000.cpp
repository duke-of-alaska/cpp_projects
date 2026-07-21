#include <iostream>
#include <string>

using str_t = std::string;

str_t concatString(str_t firstName, str_t lastName);

int main(){
    str_t firstName; 

    std::cout << "Enter your first name: ";
    std::getline(std::cin >> std::ws, firstName);

    str_t lastName; 

    std::cout << "Enter your last name: ";
    std::getline(std::cin >> std::ws, lastName);

    str_t combined_string = concatString(firstName, lastName); 

    std::cout << "Hello, " << combined_string << "!" << '\n';
    return 0;
}

str_t concatString(str_t firstName, str_t lastName){
    return firstName + " " + lastName;
}