//TOPIC: USE OF CLASS

#include<iostream>
using namespace std;
class person{
	char name[30];
	int age;
	public:
		void getdata(void);
		void displaydata(void);
};
void person::getdata(void)
{
	cout<<"Enter name :";
	cin>>name;
	cout<<"enter age :";
	cin>>age;
}
void person::displaydata(void)
{
	cout<<"_________________"<<endl;
	cout<<"name : "<<name<<endl;
	cout<<"age : "<<age;
}
int main()
{
	person p;
	p.getdata();
	p.displaydata();
	return 0;
}

//OUTPUT:
//Enter name :jinal
//enter age :30
//_________________
//name : jinal
//age : 30
//--------------------------------
//Process exited after 6.065 seconds with return value 0
