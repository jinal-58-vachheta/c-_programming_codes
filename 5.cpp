// programming exercise 2.4
//topic test your program x = a/b-c 
// for following values 
// (a)  a= 250,b=85,c=25
// (b)  a= 300,b=70,c=70

#include <iostream>
using namespace std;

int main() 
{
    double a,b,c;

    // Read the values of a, b, and c from the keyboard
    cout<<"Enter the value of a : ";
    cin>> a;

    cout<<"Enter the value of b : ";
    cin>> b;

    cout<<"Enter the value of c : ";
    cin>> c;

    // Calculate the value of x
    double x= a/b-c;

    // Display the value of x
    cout<<"The value of x is: " <<x<<endl;

    return 0;
}

/* 
OUTPUT ;
(a)
Enter the value of a : 250
Enter the value of b : 85
Enter the value of c : 25
The value of x is: -22.0588

(b)
Enter the value of a : 300
Enter the value of b : 70
Enter the value of c : 70
The value of x is: -65.7143
--------------------------------
Process exited after 5.963 seconds with return value 0
Press any key to continue . . .
*/

