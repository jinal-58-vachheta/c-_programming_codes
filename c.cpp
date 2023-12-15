/*
D) Create a structure of employee with its fields as name, age, work
experience, gender, salary and hometown. write a C program to accept
data for 5 employees:
a. Display data of all employees whose salary is more than 50000.
b. Count number of female employees and display the count.
c. Count number of employees whose hometown is not
‘Ahmedabad’.
d. Update salary by 10% of all employees whose work experience is
more than 15 years.
*/

#include<iostream>
#include<cstring>
using namespace std;
class employee
{
	int e_id;
	string name,hometown;
	int age,work_exp;
	char gender;
	long int salary;
	public:
		void getdata(int );
		void displaydata(void);
		void salary_more_than_50000(void);
		int count_female_emp(void);
		int count_not_ahm_emp(void);
		int update_salary(void);
};
void employee::getdata(int i)
{
	e_id = i+1;
	cout<<endl<<"Enter data for employee : "<<e_id;
	cout<<endl<<"NAME : ";
	cin >> name;
	cout<<"AGE : ";
	cin >> age;
	cout<<"GENDER : ";
	cin >> gender;
	cout<<"HOMETOWN : ";
	cin >> hometown;
	cout<<"WORK_EXPERIENCE : ";
	cin >> work_exp;
	cout<<"SALARY : ";
	cin >> salary;
}
void employee::displaydata()
{
	cout<<endl<<"Enter data for employee : "<<e_id<<"\n"<<endl;
	cout<<"NAME : "<<name<<endl;
	cout<<"AGE : "<<age<<endl;
	cout<<"GENDER : "<<gender<<endl;
	cout<<"HOMETOWN : "<<hometown<<endl;
	cout<<"WORK_EXPERIENCE : "<<work_exp<<endl;
	cout<<"SALARY : "<<salary<<endl;
	cout<<"__________________________________________________";
}

void employee::salary_more_than_50000()
{
	if(salary > 50000)
	{
		cout<<endl<<"name : "<<name<<" | "<<" salary : "<<salary <<endl;
	}
}
int employee::count_female_emp()
{
	if(gender == 'f')
	{
		return 0;
	}
}
int employee::count_not_ahm_emp()
{
	if(hometown == "ahm" || hometown == "ahmedabad")
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int employee::update_salary()
{
	if(work_exp > 15)
	{
	int add_salary = (salary * 10)/100;
		salary = salary + add_salary;
	}
	return salary;
}
int main()
{
	int i,n;
	cout<<"Enter array size of object : ";
	cin >>n;
	employee obj[n];
	//getdata
	for(i=0;i<n;i++)
	{
		obj[i].getdata(i);
	}
	//display data
	for(i=0;i<n;i++)
	{
		obj[i].displaydata();
	}
	cout<<"\n _______a. Display data of all employees whose salary is more than 50000.________\n";
	for(i=0;i<n;i++)
	{
		obj[i].salary_more_than_50000();
	}
	cout<<"\n _______b. Count number of female employees and display the count.________\n";
//	b. Count number of female employees and display the count.
	int count_female=0;
	for(i=0;i<n;i++)
	{
		int result = obj[i].count_female_emp();
		if(result == 0)
		{
			count_female++;
		}
		
	}
	cout<<endl <<"total female employees : "<<count_female<<endl;
	
	cout<<"\n _______c. Count number of employees whose hometown is not Ahmedabad._______\n";	
	int not_ahm_emp = 0;
	for(i=0;i<n;i++)
	{
		int result = obj[i].count_not_ahm_emp();
		if(result == 0)
		{
			not_ahm_emp++;
		}	
	}
	cout<<endl <<"total employees who is not from ahm : "<<not_ahm_emp<<endl;
	
cout<<"\n _______d. Update salary by 10% of all employees whose work experience is more than 15 years._______\n";	
for(i=0;i<n;i++)
	{
		int new_salary = obj[i].update_salary();
	}
	
	//display data for checking update
	for(i=0;i<n;i++)
	{
		obj[i].displaydata();
	}
	
	return 0;
}
