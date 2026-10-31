#include <iostream>
#include <limits>
#include <string>

struct StudentProfile {
    std::string name;
    int age = 0;
    std::string email;
    std::string phone;
    std::string city;
};

static bool readString(const std::string& prompt, std::string& value) {
    std::cout << prompt;
    if (!std::getline(std::cin, value)) {
        return false;
    }
    return !value.empty();
}

static bool readInt(const std::string& prompt, int& value) {
    std::cout << prompt;
    std::string input;
    if (!std::getline(std::cin, input)) {
        return false;
    }

    try {
        size_t pos = 0;
        value = std::stoi(input, &pos);
        return pos == input.size() && value > 0;
    } catch (const std::exception&) {
        return false;
    }
}

int main() {
    StudentProfile profile;

    std::cout << "=== CampusDudes Profile Builder ===\n";

    if (!readString("Enter your name: ", profile.name)) {
        std::cout << "Name cannot be empty.\n";
        return 1;
    }

    while (true) {
        if (readInt("Enter your age: ", profile.age)) {
            break;
        }
        std::cout << "Age must be a positive number. Please try again.\n";
    }

    while (true) {
        if (readString("Enter your email: ", profile.email)) {
            if (profile.email.find('@') != std::string::npos) {
                break;
            }
        }
        std::cout << "Invalid email address. Please include '@'.\n";
    }

    if (!readString("Enter your phone number: ", profile.phone)) {
        std::cout << "Phone number cannot be empty.\n";
        return 1;
    }

    if (!readString("Enter your city: ", profile.city)) {
        std::cout << "City cannot be empty.\n";
        return 1;
    }

    std::cout << "\nProfile summary:\n";
    std::cout << "Name: " << profile.name << "\n";
    std::cout << "Age: " << profile.age << "\n";
    std::cout << "Email: " << profile.email << "\n";
    std::cout << "Phone: " << profile.phone << "\n";
    std::cout << "City: " << profile.city << "\n";

    return 0;
}
