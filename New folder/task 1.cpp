#include <iostream>

using namespace std;

// Function to convert Kilometers to Miles
double kilometersToMiles(double km) {
    return km * 0.621;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Function to convert Seconds into Hours, Minutes, and Seconds
void secondsToHMS(int totalSeconds) {
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << "Equivalent Time: " << hours << " Hours, " << minutes << " Minutes, " << seconds << " Seconds" << endl;
}

int main() {
    int choice;
    
    do {
        // Displaying the menu
        cout << " Measurement Conversion Menu " << endl;
        cout << "1. Convert Kilometers to Miles" << endl;
        cout << "2. Convert Celsius to Fahrenheit" << endl;
        cout << "3. Convert Seconds into Hours, Minutes & Seconds" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double km;
                cout << "Enter distance in Kilometers: ";
                cin >> km;
                cout << km << " Km is equal to " << kilometersToMiles(km) << " Miles." << endl;
                break;
            }
            case 2: {
                double celsius;
                cout << "Enter temperature in Celsius: ";
                cin >> celsius;
                cout << celsius << "°C is equal to " << celsiusToFahrenheit(celsius) << "°F." << endl;
                break;
            }
            case 3: {
                int seconds;
                cout << "Enter time in Seconds: ";
                cin >> seconds;
                secondsToHMS(seconds);
                break;
            }
            case 4:
                cout << "Exiting the program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    } while (choice != 4); 

    return 0;
}

