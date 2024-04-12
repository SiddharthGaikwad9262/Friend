#include<iostream>
using namespace std;
class employee{
	int id,dept_id;
	string name;
	double salary;
	public:
	employee(){
		id=0;
		name="unknown";
		dept_id=01;
		salary=0000;
	}employee(int id,string name,int dept_id,double salary){
		this->id=id;
		this->name=name;
		this->dept_id=dept_id;
		this->salary=salary;
	}
	double net_salary()
	{
		return 0;
	}
	
};
class manager:public employee{
	double pref_bonous;
	double netsal;
	public:
		manger(double pref_bonous):
		{
			
		    this->pref_bonous=pref_bonous;
		    
		}
		double net_salary()
		{
			netsal=salary+pref_bonous;
			return netsal;
		}
		
};
class worker:public employee{
	int hr_work,netsal,hoursworked,hourlyrate;
	public:
		double net_Salary()
		{
			netsal=basic+(hoursWorked*hourlyRate);
			return netsal;
		}
		int get_hrwork()
		{
			hr_work=hoursWorked+hourlyRate
			return hr_work;
		}
	
};
int main()
{
	int ch;
	do{
		cout<<"enter your choice :";
		cin>>ch;
		switch(ch)
		{
			case 1:
		}
	}
}



