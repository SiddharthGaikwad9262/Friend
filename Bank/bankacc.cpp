//Bank Account Inheritance:
//Problem Statement: Design a system for managing bank accounts.
//Create a base class BankAccount with attributes like account number and balance.
//Derive classes like SavingsAccount and CheckingAccount, 
//each with specialized methods like withdraw() and calculate_interest().

#include<iostream>
using namespace std;

class BankAccount
{
  public:
           long accno;
		   double balance;
		   public:
		   BankAccount()
		   {
		   	accno=00;
		   	balance=00;
			}
			BankAccount(long accno, double balance)
			{
				this->accno=accno;
				this->balance=balance;
			}
		virtual	double withdraw(int rupee)
			{
				cout<<"Withdrawel of "<<rupee<<endl;
				cout<<"parent "<<endl;
				this->balance=this->balance-rupee;
				return balance;
			}
		virtual	double calculate_interest(int year)
			{
				double interest = (this->balance*12*year)/100;
				return interest;
				
			}
};
class Saving:public BankAccount
{
	protected:
          string name;
		   public:
		  Saving()
		   {
		   name="sidd";
			}
		Saving(int accno,double balance,string name):BankAccount(accno,balance)
			{
				this->name=name;
			}
//	double withdraw(int rupee)
//			{
//				
//				cout<<"Withdrawel of "<<rupee<<" From Account of "<<name<<endl;
//				this->balance=this->balance-rupee;
//				return balance;
//			}
			double calculate_interest(int year)
			{
				double interest = (this->balance*14*year)/100;
				return interest;
				
			}
};

class CheckingAccount:public BankAccount
{
	public:
          string name;
          string branch;
		   public:
		  CheckingAccount()
		   {
		   name="sidd";
		   branch="kedgaon";
			}
		CheckingAccount(int accno,double balance,string name,string branch):BankAccount(accno,balance)
			{
				this->name=name;
				this->branch=branch;
			}
	double withdraw(int rupee)
			{
				cout<<"Withdrawel of "<<rupee;
				this->balance=this->balance-rupee;
				return balance;
			}
			double calculate_interest(int year)
			{
				double interest = (this->balance*15*year)/100;
				return interest;
				
			}
};

int main()
{
	BankAccount b1(6385102633l,500000);
	cout<<"Balance "<<b1.withdraw(2000)<<endl;
	
	Saving s1(825367273l,5000,"iddharth");
    cout<<s1.withdraw(5)<<endl;
    
	cout<<s1.calculate_interest(2)<<endl;
	
	BankAccount* b2=&s1;
	cout<<b2->withdraw(55);


   
	
	
	
	
	
}


