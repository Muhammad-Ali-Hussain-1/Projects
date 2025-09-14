// Program  to generate random numbers.
// Written by Muhammad Ali Hussain

#include <iostream>
#include <cstdlib> // For rand()
#include <ctime> // For time()

int main() {
    int num; // Variable to store user input 

    // Seed the random number generator with the cuurent time 
    std::srand(std::time(0));

    // Prompt user for input and validate it 
    std::cout << "Please enter a number between 0 and 100: "; // Ask for user input
    std::cin >> num; // Read user input 

    // Ensure vaild input using a while loop 
    while (num < 1 || num > 100) {
        std::cout << "Invaild input. Please enter a number between 0 and 100: "; // Error message and re-prompt
        std::cin >> num; // Read user input again 
    }
    
    // Output random numbers
    std::cout << "Below are the " << num << " random numbers:" << std::endl;
    for (int i = 0; i < num; i++) {
        std::cout << (std::rand() % 100) + 1 << std::endl; // Generate and print a random number between 1 and 100
    }

    return 0; // End of program 
 }
