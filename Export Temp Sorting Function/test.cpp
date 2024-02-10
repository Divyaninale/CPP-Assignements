#include<iostream>
using namespace std;
#include "plus.hpp"
#include "plus.cpp"
int main()
{
	cout<<"\n	................... Export Template example...........!!";
	int n;
	cout<<"\nEnter No. Of Array Elements. : ";
	cin>>n;
	int ch,iarray[n];
	float farray[n];
	do{
		cout<<"\n Menu : \n  1.Integer array. \n  2.Float array.\n  0.Exit\n";
		cout<<"\nEnter Your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter "<<n<<" Integer Array Elements : \n";
				for(int i=0;i<n;i++)
				{
					cout<<"\tElement "<<i+1<<" : ";
					cin>>iarray[i];
				}
				SortingType(iarray,n);
				break;
			case 2:
				cout<<"\nEnter "<<n<<" Float Array Elements : \n";
				for(int i=0;i<n;i++)
				{
					cout<<"\tElement "<<i+1<<" : ";
					cin>>farray[i];
				}
				SortingType(farray,n);
				break;
		}
	}while(ch!=0);
}

