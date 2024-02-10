#include<iostream>
using namespace std;
class complex
{
	private:
		float real;
		float img;
	public:
	complex()
	{
		real=0;
		img=0;
	}
	complex(float a,float b)
	{
		real=a;
		img=b;
	}
	void getdata()
	{
		cout<<"\n enter the complex no:";
		cout<<"real";
		cin>>real;
		cout<<"imaginary";
		cin>>img;
	}
	void display()
	{
		cout<<"\n the complex no is:";
		cout<<real<<"+"<<img<<"i"<<"\n";
	}
	friend complex operator +(complex x,complex y);       
	friend complex operator -(complex x,complex y);
	
    friend complex operator +(complex x,complex y)
    {
   	 x.real=x.real+y.real;
   	x.img=x.img+y.img;
    }
    friend complex operator -(complex x,complex y)
{
	x.real=x.real-y.real;
	x.img=x.real-y.img;
}
int main()
{
	complex obj1(22,5);
	complex obj2(10,3);
	obj1.display();
	obj2.display();
	obj1+obj2;
	obj1.display();
	obj1-obj2;
	obj1.display();
	return 0;
}
