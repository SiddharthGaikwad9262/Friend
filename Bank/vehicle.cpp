//Vehicle Inheritance:
//Problem Statement: Develop a class hierarchy for vehicles.
// Start with a base class Vehicle and create derived classes like Car, Motorcycle, and Truck.
//  Each derived class should have unique properties like the number
//   of wheels and specific methods like start_engine().
#include<iostream>
using namespace std;
class Vehicle
{
	string colour;
	string fuel;
	int speed;
	
	public:
	Vehicle()
	{
		colour = "black";
		fuel="diesel";
		speed=80;
	}
	Vehicle(string colour,string fuel,int speed)
	{
		this->colour=colour;
		this->fuel=fuel;
		this->speed=speed;
		cout<<colour<<" "<<fuel<<" "<<speed<<endl;
	}
virtual	void start_engine()
	{
		cout<<"Engine has been started "<<endl;
	}
};

class Car:public Vehicle
{string colour;
	string fuel;
	int speed;
	int noofwheels;
		public:
	Car()
	{
		colour = "black";
		fuel="diesel";
		speed=80;
		noofwheels=4;
	}
	Car(string colour,string fuel,int speed,int noofwheels):Vehicle(colour,fuel,speed)
	{
	this->noofwheels=noofwheels;
	cout<<"car has"<<noofwheels<<" wheels"<<endl;
	}
	void start_engine()
	{
		cout<<"Engine of car"<<endl;
	}
	
};

class Truck:public Vehicle
{string colour;
	string fuel;
	int speed;
	int noofwheels;
		public:
	Truck()
	{
		colour = "blue";
		fuel="diesel";
		speed=90;
		noofwheels=8;
	}
	Truck(string colour,string fuel,int speed,int noofwheels):Vehicle(colour,fuel,speed)
	{
	this->noofwheels=noofwheels;
	cout<<"TRuck has "<<noofwheels<<" wheels"<<endl;
	}
	void start_engine()
	{
		cout<<"Engine of truck"<<endl;
	}
	
};

int main2()
{
	Vehicle v1("silver","petrol",100);
	v1.start_engine();
	
	Car c1("Indigo","Diesell",120,4);
	c1.start_engine();
	Truck t1("orange","hv Diesell",120,12);
	t1.start_engine();
}
