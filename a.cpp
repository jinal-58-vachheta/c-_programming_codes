/*
---------------------------------------------------------------------------------------------------------
A)	Create a class of product. The three members are 
price, quantity and name. Create two functions such that:
a.	It should return 0, if quantity is less than 5.
b.	It should return the total amount for the product brush.
---------------------------------------------------------------------------------------------------------

*/
#include<cstring>
#include<iostream>
#include<conio.h>
using namespace std;
class product;
class product 
{
		int p_id;
		int quantity;
		float price;
		int i;
	public:
		string p_name;
	
		//methods
		void getdata(int );
		void displaydata(int );
		int check_qty(int );
		int total_of_amount_brush(int);
};
int product::total_of_amount_brush(int)
{
	if(p_name == "brush")
	{
		return quantity * price;
	}
}
void product::getdata(int i)
{
				p_id = i+1;
				cout<<"Enter data for product : "<<p_id;
				cout<<"\nEnter product name : ";
				cin>> p_name;
				cout<<"\nEnter product quantity : ";
				cin>> quantity;
				cout<<"\nEnter product price : ";
				cin>> price;
				cout <<"\n\n";
}
void product::displaydata(int i)
{
				p_id = i+1;
				cout<<"DETAILSV OF PRODUCT : "<<p_id;
				cout<<"\nNAME : "<< p_name;
				cout<<"\nQUANTITY : "<< quantity;
				cout<<"\nPRICE : "<< price;
				cout <<"\n_____________________________________________\n";
}
int product::check_qty(int i)
{
	if(quantity < 5)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}
int main()
{
	int n;
	cout<<"get object size : ";
	cin>> n;
	int i;
	product object[n];
	//getdata
	for(i=0;i<n;i++)
	{
		object[i].getdata(i);
	}
	//displaydata
	
	for(i=0;i<n;i++)
	{
		object[i].displaydata(i);
	}
	// IF QTY > 5
	cout <<"\ndisplay name of product if qty is less than 5\n";
	for(i=0;i<n;i++)
	{
		int result = object[i].check_qty(i);
		if(result == 0)
		{
			object[i].displaydata(i);
		}
	}
	
	// total amount of brush
	cout <<"\ntotal amount of brush\n";
	int amount = 0,total = 0;
	for(i=0;i<n;i++)
	{
		amount = object[i].total_of_amount_brush(i);
			cout<< "\ntotal of "<< object[i].p_name<<" : "<<amount<<endl;	
	total = total + amount ;
	}
		cout<< "\ntotal amount of brush : "<<total;
		getch();
	return 0;
}
/*

OUTPUT :
get object size : 2
Enter data for product : 1
Enter product name : ldh

Enter product quantity : 6

Enter product price : 7


Enter data for product : 2
Enter product name : brush

Enter product quantity : 4

Enter product price : 8


DETAILSV OF PRODUCT : 1
NAME : ldh
QUANTITY : 6
PRICE : 7
_____________________________________________
DETAILSV OF PRODUCT : 2
NAME : brush
QUANTITY : 4
PRICE : 8
_____________________________________________

display name of product if qty is less than 5
DETAILSV OF PRODUCT : 2
NAME : brush
QUANTITY : 4
PRICE : 8
_____________________________________________

total amount of brush

total of ldh : 0

total of brush : 32

total amount of brush : 32
--------------------------------
Process exited after 67.22 seconds with return value 0
Press any key to continue . . .
*/

