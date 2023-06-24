#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string generatePassword(int length) {
    std::string password;
    const std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    int charCount = characters.length();

    // Initialize random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate random password
    for (int i = 0; i < length; ++i) {
        int index = std::rand() % charCount;
        password += characters[index];
    }

    return password;
}

int main() {
    int passwordLength;
    std::cout << "Enter the desired length for the password: ";
    std::cin >> passwordLength;

    std::string password = generatePassword(passwordLength);
    std::cout << "Generated Password: " << password << std::endl;

    return 0;
}
