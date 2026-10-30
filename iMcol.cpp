#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "Enter your age: ";
    int age;    

    std::cout << "You are " << age << " years old." << std::endl;
    std::cout << "Enter your email: ";
    std::string email;
    std::cin >> email;
    std::cout << "Your email is " << email << "." << std::endl;
    std::cout << "Enter your phone number: ";
    std::string phone;
    std::cin >> phone;
    std::cout << "Your phone number is " << phone << "." << std::endl;
    std::cout << "Enter your address: ";
    std::string address;
    std::cin >> address;
    std::cout << "Your address is " << address << "." << std::endl;
    std::cout << "Enter your city: ";
    std::string city;
    std::cin >> city;
    std::cout << "Your city is " << city << "." << std::endl;
    std::cout << "Enter your state: ";
    return 0;
}