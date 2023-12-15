//topic : programming exercise 2.6 
//  write a c++ program that will ask for a temperature in celsius 
//  and display it fehrenheit

#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Read the temperature in Celsius from the keyboard
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit using the formula (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Display the temperature in Fahrenheit without setting precision
    cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;

    return 0;
}
/* 
OUTPUT :
Enter temperature in Celsius: 122
Temperature in Fahrenheit: 251.6 F

--------------------------------
Process exited after 2.013 seconds with return value 0
Press any key to continue . . .
*/
