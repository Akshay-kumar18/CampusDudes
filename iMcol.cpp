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
    return 0;
}