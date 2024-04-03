#include <iostream>
#include <cctype> // for std::tolower
#include<string>

// Function to check if a string is a palindrome
bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Convert characters to lowercase for case-insensitive comparison
        if (std::tolower(str[left]) != std::tolower(str[right])) {
            return false; // Characters don't match
        }

        ++left;
        --right;
    }

    return true; // All characters matched
}

int main() {
    std::string userInput;

    // Get user input
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);

    // Check if the entered string is a palindrome
    if (isPalindrome(userInput)) {
        std::cout << "The entered string is a palindrome." << std::endl;
    }
    else {
        std::cout << "The entered string is not a palindrome." << std::endl;
    }

    return 0;
}
