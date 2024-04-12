//3:Create a abstract class Shape with pure virtual method area;
//Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
//Test these all classes by creating object of respective class.
#include<iostream>
using namespace std;
class shape{
	protected:
	float a;
	public:
	virtual void area()=0;

	
};
class circle:public shape{
	private:
		int r;
	public:
	void area(int r){
		
		a=3.14*r*r;
		cout<<"Area of circle ="<<a<<endl;
		
	}
	
	
};
class rectangle:public shape{
	int l,b;
	public:
	void area(int l,int b){
		
		a=l*b;
		cout<<"Area of rectangle ="<<a<<endl;
	}
	
	
};
class triangle:public shape{
	int l,b;
	public:
	void area(int l,int b){
		
		a=0.5*l*b;
		cout<<"Area of Triangle :"<<a<<endl;
	}

	
};
int main()
{	
	circle c1;
	c1.area(7);
	rectangle r1;
	r1.area(2.5,6);
	triangle t1;
	t1.area(2,4);
	
}
