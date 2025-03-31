// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: March 2025
// This program checks if the user enters the correct chosen number
#include <iostream>
#include <string>
int main() {
    // Step 1: GET user_num_str
    std::string user_num_str;
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> user_num_str;

    // Step 2: GENERATE chosen_number (0-9)
    srand(time(0));  // Seed the random number generator
    // Generate a random number between 0 and 9
    int chosen_number = rand() % 10;

    try {
        // Step 3: TRY user_num_str
        int user_num = std::stoi(user_num_str);  // Convert string to integer

        // Step 4: Check if user_num_str is equal to chosen_number
        if (user_num == chosen_number) {
            std::cout << "You got the right number!" << std::endl;
        } else {
            std::cout <<
            "You did not get the right number. The right number is "
            << chosen_number << std::endl;
        }
    } catch (const std::invalid_argument& e) {
        // Step 5: EXCEPT Invalid input
        std::cout << "Error. You entered " << user_num_str
        << ". Please enter an integer." << std::endl;
    }

    return 0;
}
