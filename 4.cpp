//topic :  programming exercise 2.3
//write a program to input an integer value 
//from keyboard and display on screen "WELL DONE"

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
  	int i;
	for(i=0;i<=25;i++)
  	{
  		int integer = i+65;
  		cout<<char(integer)<<" : "<< integer<<"      ||      ";
  	}
	// 32 FOR ' ' : SPACE
  	cout<<endl<<"enter numbers for make string : "<<endl;
  	int n[9];
  	for(i=0;i<9 ;i++)
  	{
  		cin>>n[i];
		  cout<<" : " <<char(n[i])<<endl;		
	}
  	
  	for(i=0;i<9 ;i++)
  	{
		  cout<<char(n[i]);		
	}
  	
  return 0;
} 

/*
OUTPUT:
A : 65      ||      B : 66      ||      C : 67      ||      D : 68      ||      
E : 69      ||      F : 70      ||      G : 71      ||      H : 72      ||      
I : 73      ||      J : 74      ||      K : 75      ||      L : 76      ||      
M : 77      ||      N : 78      ||      O : 79      ||      P : 80      ||      
Q : 81      ||      R : 82      ||      S : 83      ||      T : 84      ||      
U : 85      ||      V : 86      ||      W : 87      ||      X : 88      ||      
Y : 89      ||      Z : 90      ||
enter numbers for make string :
87
 : W
69
 : E
76
 : L
76
 : L
32
 :
68
 : D
79
 : O
78
 : N
69
 : E
WELL DONE
--------------------------------
Process exited after 62.21 seconds with return value 0
Press any key to continue . . .
*/
