// Program to calculate the current time based on elapsed hours
// Written by Muhammad Ali Hussain 

#include <iostream> // Include the input/output stream library 
#include <string>   // Include the string library for handling AM/PM

int main() {
    int startHour;  // Variable to store the starting hour
    std::string am_pm;  // Variable to store whether it's AM or PM
    int elapsedHours;   // Variable to store the number of elapsed hours 

    std::cout << "Enter the starting hour: ";  // Prompt the user for the starting hour 
    std::cin >> startHour;  // Get the starting hour from the user 

    std::cout << "Enter am or pm ";  // Prompt the user for AM or PM
    std::cin >> am_pm;  // Get AM or PM from the user

    std::cout << "Enter the number of elapsed hours: ";  // Prompt for elapsed hours
    std::cin >> elapsedHours;  // Get the elapsed hours 

    // Convert the starting hour to 24-hour format 
    if (am_pm == "pm" && startHour != 12) {  // If PM and not 12, add 12
        startHour += 12; 
    } else if (am_pm == "am" && startHour == 12) {  // If 12 AM, convert to 0
        startHour = 0;
    }

    // Add the elapsed hours and wrap around 24-hour format 
    int totalHour = (startHour + elapsedHours) % 24;  // Add and wrap around if over 24 

    // Convert back to 12-hour format 
    std::string new_am_pm;  // Variable to store new AM/PM 
    int displayHour;  // Variable to store the hour to display 

    if (totalHour == 0) {  // If 0, it's 12 AM 
        displayHour = 12; 
        new_am_pm = "am";
    } else if (totalHour < 12) {  // If less than 12, it's AM 
        displayHour = totalHour;
        new_am_pm = "am";
    } else if (totalHour == 12) {  // If 12, it's PM 
        displayHour = 12;
        new_am_pm = "pm";
    } else {  // If greater than 12, subtract 12 and it's PM
        displayHour = totalHour - 12;
        new_am_pm = "pm";
    }

    // Display the result 
    std::cout << "This time is: " << displayHour << ":00 " << new_am_pm << std::endl; 

    return 0;  // Indicate that the program ended successfully
}

// End of program