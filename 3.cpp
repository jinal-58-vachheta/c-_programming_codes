//TOPIC : here's a simple C++ program that reads
// two numbers from the keyboard and displays the
// larger value on the screen

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Read the two numbers from the keyboard
    cout << "Enter the first number : ";
    cin >> num1;

    cout << "Enter the second number : ";
    cin >> num2;

    // Determine the larger value
    int largerValue = (num1 > num2) ? num1 : num2;

    // Display the larger value
    cout << "The larger value is: " << largerValue << endl;

    return 0;
}
/*
OUTPUT :
Enter the second number : 67
The larger value is: 67

--------------------------------
Process exited after 3.92 seconds with return value 0
Press any key to continue . . .
*/
