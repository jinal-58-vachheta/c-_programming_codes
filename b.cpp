/*
---------------------------------------------------------------------------------------------------------
B) Create a structure of students with members name, age, gender, last
degree, aadhar card and percentage obtained:
a. Display count of female and male students.
b. List all female students whose last degree is BCA.
c. List all male students whose percentage is more than 75.
d. List all students with 5 as last digit of their aadhar card number.
e. Count number of students of age more than 20.

---------------------------------------------------------------------------------------------------------
*/


#include<iostream>
#include<cstring>
using namespace std;
class student
{
	int s_id;
	string s_name;
	int age;
	char gender;
	string last_degree;
	float percentage;
	long int aadhar_card;
	public:
		//methods
		void getdata(int );
		void displaydata(void);
		int count_male_female(void);
		void female_in_bca(void);
		void per_more_than_75(void);
		void is_last_digit_5(void);
		void age_more_than_20(void);
};

void student::age_more_than_20()
{
	if(age >20)
	{
		cout<<endl << s_name<<"'s age "<<age<<endl;	
	}
}


void student::getdata(int i)
{
	s_id = i+1;
	cout<<endl<<"Enter data for student : "<<s_id;
	cout<<endl<<"NAME : ";
	cin >> s_name;
	cout<<"AGE : ";
	cin >> age;
	cout<<"GENDER : ";
	cin >> gender;
	cout<<"LAST_DEGREE : ";
	cin >> last_degree;
	cout<<"PERCENTAGE : ";
	cin >> percentage;
	cout<<"AADHAR_CARD : ";
	cin >> aadhar_card;
}

void student::displaydata()
{
	cout<<endl<<"Enter data for student : "<<s_id<<"\n"<<endl;
	cout<<"NAME : "<<s_name<<endl;
	cout<<"AGE : "<<age<<endl;
	cout<<"GENDER : "<<gender<<endl;
	cout<<"LAST_DEGREE : "<<last_degree<<endl;
	cout<<"PERCENTAGE : "<<percentage<<endl;
	cout<<"AADHAR_CARD : "<<aadhar_card<<endl;
	cout<<"__________________________________________________";
}
int student::count_male_female()
{
	if(gender == 'm')
	{
		return 1;
	}
	else if(gender == 'f')
	{
		return 0;
	}
}

void student::female_in_bca()
{
	if(gender == 'f')
	{
		if(last_degree == "bca")
		{
			cout<<endl << s_name<<" is in "<<last_degree;
		}
	}
	
}
void student::per_more_than_75()
{
	if(gender == 'm')
	{
		if(percentage > 75)
		{
		cout<<endl<< s_name<<" is in "<<last_degree<<" with "<<percentage<<" %"<<endl;	
		}
	}	
}
void student::is_last_digit_5()
{
	int last_num = aadhar_card % 10;
	if(last_num == 5)
	{
		cout<<endl<< s_name<<" | "<<"aadhar_card "<<aadhar_card<<" have last-letter "<<last_num<<endl;
	}
}

int main()
{
	int i;
	int n;
	cout<<"Enter array size of object : ";
	cin>>n;
	student obj[n];
	for(i=0;i<n;i++)
	{
		obj[i].getdata(i);
	}
	for(i=0;i<n;i++)
	{
		obj[i].displaydata();
	}

cout<<"\n _______a. Display count of female and male students.________\n";
	int count_male=0,count_female=0;	
	for(i=0;i<n;i++)
	{
		int count = obj[i].count_male_female();
		if(count == 1)
		{
			count_male++;
		}
		else if(count == 0)
		{
			count_female++;
		}
		if(i== (n-1))
		{
			cout<<endl<<"count male : "<<count_male<<endl;
			cout<<"count female : "<<count_female<<endl;
		}
	}
cout<<"\n________b. List all female students whose last degree is BCA.________\n";	
	//b. List all female students whose last degree is BCA
	for(i=0;i<n;i++)
	{
		obj[i].female_in_bca();
	}
cout<<"\n________c. List all male students whose percentage is more than 75..________\n";
	//c. List all male students whose percentage is more than 75.
	for(i=0;i<n;i++)
	{
		obj[i].per_more_than_75();
	}
	
cout<<"\n________d. List all students with 5 as last digit of their aadhar card number..________\n";
	//d. List all students with 5 as last digit of their aadhar card number.
		for(i=0;i<n;i++)
	{
		obj[i].is_last_digit_5();
	}
cout<<"\n_______e. Count number of students of age more than 20.________\n";
//	e. Count number of students of age more than 20.
	for(i=0;i<n;i++)
	{
		obj[i].age_more_than_20();
	}
	return 0;
}
/*
OUTPUT :
Enter array size of object : 3

Enter data for student : 1
NAME : jinal
GENDER : f
LAST_DEGREE : bca
PERCENTAGE : 97
AADHAR_CARD : 9312865

Enter data for student : 2
NAME : jannat
GENDER : f
LAST_DEGREE : cs
PERCENTAGE : 54
AADHAR_CARD : 9328689

Enter data for student : 3
NAME : jatin
GENDER : m
LAST_DEGREE : bca
PERCENTAGE : 90
AADHAR_CARD : 8746765

Enter data for student : 1

NAME : jinal
GENDER : f
LAST_DEGREE : bca
PERCENTAGE : 97
AADHAR_CARD : 9312865
__________________________________________________
Enter data for student : 2

NAME : jannat
GENDER : f
LAST_DEGREE : cs
PERCENTAGE : 54
AADHAR_CARD : 9328689
__________________________________________________
Enter data for student : 3

NAME : jatin
GENDER : m
LAST_DEGREE : bca
PERCENTAGE : 90
AADHAR_CARD : 8746765
__________________________________________________
 _______a. Display count of female and male students.________

count male : 2
count female : 1

________b. List all female students whose last degree is BCA.________

jinal is in bca
________c. List all male students whose percentage is more than 75..________

jatin is in bca with 90 %

________d. List all students with 5 as last digit of their aadhar card number..________

jinal | aadhar_card 9312865 have last-letter 5

jatin | aadhar_card 8746765 have last-letter 5

_______e. Count number of students of age more than 20.________

jinal's age 4745920
--------------------------------
Process exited after 113.4 seconds with return value 0
Press any key to continue . . .
*/
