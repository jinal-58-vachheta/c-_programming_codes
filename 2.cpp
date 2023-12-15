//TOPIC : PROGRAMMING EXERCISE 2.1
// WRITE A PROGRAM TO DISPLAY THE FOLLOWING OUTPUT :
//		    MATHS : 90
//		  PHYSICS : 77
//		CHEMISTRY : 69

// FULL-FORM OF iostream : standard input-output stream
#include<iostream>
// FULL-FORM OF iomanip : input output manipulators
#include<iomanip>    //for setw()
using namespace std;
int main()
{
	int MATHS,PHYSICS,CHEMISTRY;
	cout<<"\nENTER MARKS OF MATHS : ";
	cin >>MATHS;
	cout<<"\nENTER MARKS OF PHYSICS : ";
	cin >>PHYSICS;
	cout<<"\nENTER MARKS OF CHEMISTRY : ";
	cin >>CHEMISTRY;
	
	cout<<endl<<"_____________________________"<<endl;
	
	cout<<setw(12)<<"MATHS :"<<setw(3)<<MATHS <<endl;
	cout<<setw(12)<<"PHYSICS :"<<setw(3)<<PHYSICS <<endl;
	cout<<setw(12)<<"CHEMISTRY :"<<setw(3)<<CHEMISTRY <<endl;
 } 
 
 
/*
OUTPUT :

ENTER MARKS OF MATHS : 89

ENTER MARKS OF PHYSICS : 67

ENTER MARKS OF CHEMISTRY : 90

_____________________________
     MATHS : 89
   PHYSICS : 67
 CHEMISTRY : 90

--------------------------------
Process exited after 6.834 seconds with return value 0
Press any key to continue . . .
*/
 

