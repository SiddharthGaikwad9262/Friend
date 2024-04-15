//1.1 Emp state--- id(int), name, deptId , basicSalary(double)
//Accept all of above in constructor arguments.
#include<iostream>
using namespace std;
class Employee
{
	protected: int id,deptId;
	           string name;
               double basicSal;
    public:
	   Employee()
	   {
	   	int id=1;
	    int deptId=102;
	    string name="Omkar";
        double basicSal=4000000.00;
	   	
	    }
		
		Employee(int id,int deptId,string name,double basicSal)	
		{
			this->id=id;
			this->deptId=deptId;
			this->name=name;
			this->basicSal=basicSal;
			
	    }
		virtual double computeNetSalary()
		{
		  return basicSal;
	    }
	    void dispaly()
	    {
	    	cout<<"id "<<id<<" deptId "<<deptId<<"Name "<<name<<" salary "<<basicSal<<endl;
		}
	    

			   	           
};

class Manager:public Employee
{
	private:
		double perBonus;
	
	public:Manager()
	{
		 perBonus=0;
	}
	 
	 Manager(int id,int deptId,string name,double basicSal,double perBonus):Employee(id,deptId,name,basicSal)
	 {
	 	this->perBonus=perBonus;
	 }
	double  computeNetSalary()
	{
		return this->basicSal+this->perBonus;
		
	}	
	void dispaly()
	    {
	    	cout<<"id "<<id<<" deptId "<<deptId<<"Name "<<name<<" salary "<<basicSal<<" Bonus "<<perBonus<<endl;
		}
	    
		
};

class Worker:public Employee
{
	private:int hoursWorked;
	double hourlyRate;
	
	public:
		Worker()
		{
			hoursWorked=5;
			hourlyRate=500.00;
		}
		Worker(int id,int deptId,string name,double basicSal, int hoursWorked, double hourlyRate):Employee(id,deptId,name,basicSal)
		{
			this->hoursWorked=hoursWorked;
			this->hourlyRate=hourlyRate;
		}
			void dispaly()
	    {
	    	cout<<"id "<<id<<" deptId "<<deptId<<"Name "<<name<<" salary "<<basicSal<<" hoursWorked "<<hoursWorked<<"hourlyRate "<<hourlyRate<<endl;
		}
		double  computeNetSalary()
	    {
		   return this->basicSal+(this->hoursWorked*this->hourlyRate);
		}	
		double gethourlyRate()
		{
			return this->hourlyRate;
		}
		
		
	
};

int main()
{
	Employee emp(101,1111,"sidd",200000.00);
	emp.dispaly();
	cout<<" Sal"<<emp.computeNetSalary()<<endl;
	
	Manager mag(102,2222,"sam",600000.00,9900);
	mag.dispaly();
	cout<<" Sal"<<mag.computeNetSalary()<<endl;
	
	Worker work(103,3333,"om",30000.00,4,500.00);
    work.dispaly();
    cout<<" Sal"<<work.computeNetSalary()<<endl;
    cout<<"Hourly rate"<<work.gethourlyRate()<<endl;
    
    Employee* arr[30];
    
    
    
    
    int counter=0;
    int choice;
    while(choice<=3){
     
    cout<<"Enter your choice"<<endl;
    cin>>choice;
	
    int id,deptId,hoursWorked;
    string name;
    double basicSal,perBonus,hourlyRate;
    if(choice==1){
     cout<<"id deptId name basicSal perBonus"<<endl;	
     cin>>id>>deptId>>name>>basicSal>>perBonus;
	 	Manager mag(id,deptId,name,basicSal,perBonus);
		 arr[counter++]=&mag;
		 arr[counter-1]->dispaly();
		 
		
		 	
	}else if(choice==2){
		cout<<"id deptId name basicSal hoursWorked hourlyRate"<<endl;
		cin>>id>>deptId>>name>>basicSal>>hoursWorked>>hourlyRate;
		Worker work(id,deptId,name,basicSal,hoursWorked,hourlyRate);
			 arr[counter++]=&work;
		     arr[counter-1]->dispaly();			 	
	}else if(choice==3){
		for(int i=0;i<counter;i++){
			cout<<arr[i]->computeNetSalary()<<endl;
			arr[i]->dispaly();
		}
	}

   
}
    
    
    
    
    
    
	
	
	

}

