//topic : programming exercise 2.5 
//  write a c++ program that will ask for a temperature in fehrenheit
//  and display it celsius 

#include <iostream>
using namespace std;

int main() 
{
    double fahrenheit,celsius;

    // Read the temperature in Fahrenheit from the keyboard
    cout<< "Enter temperature in Fahrenheit: ";
    cin>> fahrenheit;

    // Convert Fahrenheit to Celsius using the formula (F - 32) * 5/9
    celsius= (fahrenheit - 32.0) * 5.0 / 9.0;

    // Display the temperature in Celsius
    cout<< "Temperature in Celsius: " << celsius << endl;

    return 0;
}

/* 
OUTPUT :
Enter temperature in Fahrenheit: 87
Temperature in Celsius: 30.5556

--------------------------------
Process exited after 3.263 seconds with return value 0
Press any key to continue . . .
*/
