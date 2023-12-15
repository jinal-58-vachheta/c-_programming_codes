/*
E) Create a structure of student with fields as name, age, last degree,
percentage obtained in last degree, mobile no., and scholarship. Write a
C program to create 5 students’ array and write functions to do the
following:
a. Give count of male and female students.
b. Display data of all male students whose age is greater than 20.
c. Display list of students whose last degree is B.Sc.
d. Assign scholarship based on the following criteria:
	i. &lt;50% no scholarship.
	ii. &gt;51% and &lt;70%, 20% scholarship.
	iii. &gt;71% and &lt;90%, 30% scholarship.
	iv. &gt;91% full scholarship.
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
	string scholarship;
	string last_degree;
	float percentage;
	long int mobile_no;
	public:
		//methods
		void getdata(int );
		void displaydata(void);
		int count_male_female(void);
		void stu_in_bsc(void);
		void assign_scholarship(void);
		void male_age_more_than_20(void);
};

void student::male_age_more_than_20()
{
	if(gender == 'm')
	{
	if(age >20)
	{
		cout<<endl << s_name<<"'s age "<<age<<endl;	
	}
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
	cout<<"MOBILE_NO : ";
	cin >> mobile_no;
}

void student::displaydata()
{
	cout<<endl<<"Enter data for student : "<<s_id<<"\n"<<endl;
	cout<<"NAME : "<<s_name<<endl;
	cout<<"AGE : "<<age<<endl;
	cout<<"LAST_DEGREE : "<<last_degree<<endl;
	cout<<"GENDER : "<<gender<<endl;
	cout<<"SCHOLARSHIP : "<<scholarship<<endl;
	cout<<"PERCENTAGE : "<<percentage<<endl;
	cout<<"MOBILE_NO : "<<mobile_no<<endl;
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

void student::stu_in_bsc()
{
		if(last_degree == "bsc")
		{
			cout<<endl << s_name<<" is in "<<last_degree;
		}
}

void student::assign_scholarship()
{
	if(percentage < 50)
	{
		scholarship = "no scholarship";
	}
	else if(percentage > 51 && percentage < 70)
	{
		scholarship = "20% scholarship";
	}
	else if(percentage > 71 && percentage < 90)
	{
		scholarship = "30% scholarship";
	}
	else if(percentage > 91)
	{
		scholarship = "full scholarship";
	}
}

int main()
{
	int i;
	int n;
	cout<<"Enter array size of object : ";
	cin>>n;
	student obj[n];
	//getdata
	for(i=0;i<n;i++)
	{
		obj[i].getdata(i);
	}
//	displaydata
	for(i=0;i<n;i++)
	{
		obj[i].displaydata();
	}

cout<<"\n ______a. Give count of male and female students..________\n";
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
cout<<"\n________b. Display data of all male students whose age is greater than 20.________\n";	
	
//	b. Count number of male students of age more than 20.
	for(i=0;i<n;i++)
	{
		obj[i].male_age_more_than_20();
	}
	
cout<<"\n________c. Display list of students whose last degree is B.Sc.________\n";
	for(i=0;i<n;i++)
	{
		obj[i].stu_in_bsc();
	}
	
cout<<"\n________d. Assign scholarship based on the following criteria:"
"	i. &lt;50% no scholarship."
"	ii. &gt;51% and &lt;70%, 20% scholarship."
"	iii. &gt;71% and &lt;90%, 30% scholarship."
"	iv. &gt;91% full scholarship________\n"<<endl;

	for(i=0;i<n;i++)
	{
		obj[i].assign_scholarship();
	}
	for(i=0;i<n;i++)
	{
		obj[i].displaydata();
	}

	return 0;
}

/*
OUTPUT :
Enter array size of object : 3

Enter data for student : 1
NAME : jinal
AGE : 76
GENDER : m
LAST_DEGREE : bsc
PERCENTAGE : 98
MOBILE_NO : 9816987

Enter data for student : 2
NAME : krisha
AGE : 45
GENDER : f
LAST_DEGREE : cs
PERCENTAGE : 43
MOBILE_NO : 9812369

Enter data for student : 3
NAME : jenny
AGE : 87
GENDER : m
LAST_DEGREE : mca
PERCENTAGE : 65
MOBILE_NO : 029739

Enter data for student : 1

NAME : jinal
AGE : 76
LAST_DEGREE : bsc
GENDER : m
SCHOLARSHIP :
PERCENTAGE : 98
MOBILE_NO : 9816987
__________________________________________________
Enter data for student : 2

NAME : krisha
AGE : 45
LAST_DEGREE : cs
GENDER : f
SCHOLARSHIP :
PERCENTAGE : 43
MOBILE_NO : 9812369
__________________________________________________
Enter data for student : 3

NAME : jenny
AGE : 87
LAST_DEGREE : mca
GENDER : m
SCHOLARSHIP :
PERCENTAGE : 65
MOBILE_NO : 29739
__________________________________________________
 ______a. Give count of male and female students..________

count male : 2
count female : 1

________b. Display data of all male students whose age is greater than 20.________

jinal's age 76

jenny's age 87

________c. Display list of students whose last degree is B.Sc.________

jinal is in bsc
________d. Assign scholarship based on the following criteria:  
i. &lt;50% no scholarship.      
ii. &gt;51% and &lt;70%, 20% scholarship.      
 iii. &gt;71% and &lt;90%, 30% scholarship.    
   iv. &gt;91% full scholarship________


Enter data for student : 1

NAME : jinal
AGE : 76
LAST_DEGREE : bsc
GENDER : m
SCHOLARSHIP : full scholarship
PERCENTAGE : 98
MOBILE_NO : 9816987
__________________________________________________
Enter data for student : 2

NAME : krisha
AGE : 45
LAST_DEGREE : cs
GENDER : f
SCHOLARSHIP : no scholarship
PERCENTAGE : 43
MOBILE_NO : 9812369
__________________________________________________
Enter data for student : 3

NAME : jenny
AGE : 87
LAST_DEGREE : mca
GENDER : m
SCHOLARSHIP : 20% scholarship
PERCENTAGE : 65
MOBILE_NO : 29739
__________________________________________________
--------------------------------
Process exited after 69.64 seconds with return value 0
Press any key to continue . . .
*/
