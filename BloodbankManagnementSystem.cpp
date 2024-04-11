#include<iostream>
#include<fstream>
using namespace std;
//creat a class
class database{
public:
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
string user;
int pass,date;
int X=18;

  int total=0;
  void enter();
  void login();
  void show();
  void search();
  void update();
  void deleterecord();
  void exit();
 
};
void database ::login()
{

    cout << "\n\n\t\t\t|--------------LOGIN----------------|" << endl;
    cout << "\n\t\t\t Enter User_name: ";
    cin >> user;
    cout << "\n\t\t\t Enter Password[4914]: ";
    cin >> pass;
    cout << "\n\t\t\t|-----------------------------------|" << endl;
    if (pass == 4914)
    {
    	cout<<"\n\n";
        cout << "\n\t\t\t***** successfully logging ******";
        for (int i = 0; i < 10; i++)
        {
           // cout << ".";
            
        }
        
    }
    else
    {
        cout << "\nERROR.....! PLEASE CHECK YOUR PASSWORD.";
       int main();
    }
}

void database:: enter()
{
cout<<"|.. Menu..|:";

int ch=0;
cout<<"\n>> How many donors donate the blood:"<<endl;
cin>>ch;
if(total==0)
{
total=ch+total;
ofstream out;
out.open("database22.txt",ios::app);
if(!out)
{
	cout<<"\n NO..such file is present";
}

for(int i=0;i<ch;i++)
{
cout<<"\nEnter the Data of donor: "<<i+1<<endl<<endl;
cout<<"enter name:"<<endl;
cin>>arr1[i];
cout<<"enter age:"<<endl;
cin>>arr2[i];
//if(arr2[i] >=X)
{
//cout<<".";	
}
//else
{
	//cout<<"\nSORRY...YOUR AGE IS LESS THAN 18. YOU ARE NOT ABLE TO DONATE THE BLOOD::";
}
cout<<"enter blood group:"<<endl;
cin>>arr3[i];
cout<<"enter amount of blood"<<endl;
cin>>arr4[i];
cout<<"enter contact"<<endl;
cin>>arr5[i];
cout<<"Enter the date of the blood donation:\n";
cin>>date;
cout<<endl;
				
//write the data using ofstream
	
//ofstream out("database22.txt",ios::app);
out<<arr1[i]<<"\t\t\t";
//cout<<endl;
out<<arr2[i]<<"\t\t\t";
//cout<<endl;
out<<arr3[i]<<"\t\t\t";
//cout<<endl;
out<<arr4[i]<<"\t\t\t";
//cout<<endl;
out<<arr5[i]<<"\t\t\t";
//cout<<endl;
out<<date<<"\t\t\t";
cout<<"\n";
	
out.close();
//cout<<endl;
}
}
else
{

for(int i=total;i<ch+total;i++)
{
				
cout<<"\nEnter the Data of donor: "<<i+1<<endl<<endl;
cout<<"Enter name: ";
cin>>arr1[i];
cout<<"Enter  age: ";
cin>>arr2[i];
cout<<"Enter blood group: ";
cin>>arr3[i];
cout<<"Enter amount of blood: ";
cin>>arr4[i];
cout<<"Enter contact :";
cin>>arr5[i];
cout<<endl;
cout<<" \n Enter the date of the blood donation:";
cin>>date;
				
ofstream out("database22.txt",ios::app);
out<<arr1[i]<<"\t\t\t";
//cout<<endl;
out<<arr2[i]<<"\t\t\t";
//cout<<endl;
out<<arr3[i]<<"\t\t\t";
//cout<<endl;
out<<arr4[i]<<"\t\t\t";
//cout<<endl;
out<<arr5[i]<<"\t\t\t";
//cout<<endl;
out<<date<<"\n\n";
cout<<endl;
	
out.close();
cout<<endl;
}
total=ch+total;
}
}
void database:: show()
{
if(total==0)
{
cout<<"No data is entered"<<endl;
}
else
{

for(int i=0;i<total;i++)
{
	    			
cout<<"\nData of donor "<<i+1<<endl;
cout << "\n\t\t\t|-----------------------------------|" << endl;
cout<<"\t\t\t\t: Name :"<<arr1[i]<<endl;
cout<<"\t\t\t\t: Age: "<<arr2[i]<<endl;
cout<<"\t\t\t\t: Blood Group :"<<arr3[i]<<endl;
cout<<"\t\t\t\t: Amount of blood: "<<arr4[i]<<endl;
cout<<"\t\t\t\t: Contact: "<<arr5[i]<<endl;
cout<<"\t\t\t\t: Date:"<<date<<endl;
cout << "\n\t\t\t|-----------------------------------|" << endl;	    			
cout<<endl;
	    			
	ofstream out("database22.txt",ios::app);
	out<<arr1[i];
	out<<arr2[i];
	cout<<endl;
	out<<arr3[i];
	out<<arr4[i];
	cout<<endl;
	out<<arr5[i];
	cout<<endl;cout<<endl;
	out<<date;
	cout<<endl;
	out.close();
    cout<<endl;
    cout<<endl;
	}

	}

}
void database:: search()
{
if(total==0)
{
cout<<"No data is entered:"<<endl;
}
else{
string bloodgroup;
cout<<"Enter the blood group of donor:"<<endl;
cin>>bloodgroup;
for(int i=0;i<total;i++)
{
ifstream in("database22.txt",ios::app);
if(bloodgroup==arr3[i])
{
	cout << "\n\t\t\t|-----------------------------------|" << endl;
cout<<"\t\t\t\t: Name :"<<arr1[i]<<endl;
cout<<"\t\t\t\t: Age: "<<arr2[i]<<endl;
cout<<"\t\t\t\t: Blood Group :"<<arr3[i]<<endl;
cout<<"\t\t\t\t: Amount of blood :"<<arr4[i]<<endl;
cout<<"\t\t\t\t: Contact :"<<arr5[i]<<endl;
cout<<"\t\t\t\t: Date:"<<date<<endl;
cout << "\n\t\t\t|-----------------------------------|" << endl;	    			
cout<<endl;
//cout<<"Name "<<arr1[i]<<endl;
//cout<<"age "<<arr2[i]<<endl;
//cout<<"blood group "<<arr3[i]<<endl;
//cout<<"amount of blood "<<arr4[i]<<endl;
//cout<<"Contact "<<arr5[i]<<endl;
ofstream out("database22.txt",ios::app);
out<<arr1[i];cout<<endl;
out<<arr2[i];cout<<endl;
out<<arr3[i];cout<<endl;
out<<arr4[i];cout<<endl;
out<<arr5[i];cout<<endl;
	
out.close();cout<<endl;
}
}
}
}
void database:: update()
{
if(total==0)
{
cout<<"No data is entered:"<<endl;
}

else{

string bloodgroup;

cout<<"Enter the blood group of donor which you want to update:"<<endl;
cin>>bloodgroup;
for(int i=0;i<total;i++)
{
if(bloodgroup==arr3[i])
{
cout<<"\n<<..Previous data..>>:"<<endl<<endl;
cout<<"Data of donor: "<<i+1<<endl;
cout<<"Name: "<<arr1[i]<<endl;
cout<<"age: "<<arr2[i]<<endl;
cout<<"blood group:"<<arr3[i]<<endl;
cout<<"amount of blood :"<<arr4[i]<<endl;
cout<<"Contact: "<<arr5[i]<<endl;
cout<<"Date:"<<date;
cout<<endl;
cout << "\n\t\t\t|================================================================|" << endl;

cout<<"\nEnter new data:"<<endl<<endl;
cout<<"Enter name: ";
cin>>arr1[i];
cout<<"Enter age:";
cin>>arr2[i];
cout<<"Enter blood group: ";
cin>>arr3[i];
cout<<"Enter amount of blood:";
cin>>arr4[i];
cout<<"Enter contact: ";
cin>>arr5[i];
cout<<" Enter date:";
cin>>date;

ofstream out("database22.txt");
out<<arr1[i];
cout<<endl;
out<<arr2[i];
cout<<endl;
out<<arr3[i];
cout<<endl;
out<<arr4[i];
cout<<endl;
out<<arr5[i];
cout<<endl;
out<<date;
cout<<endl;
	
out.close();
cout<<endl;
}
}
}
}
void database:: deleterecord()
{
if(total==0)
{
cout<<"No data is entered:"<<endl;
}
else{
int a;
cout<<"Press 1 to delete all record:"<<endl;
cout<<"Press 2 to delete specific record:"<<endl;
cin>>a;
if(a==1)
{
total=0;
cout<<"All record is deleted..!!"<<endl;
}
else if(a==2)
{
string bloodgroup;
cout<<"Enter the blood group of donor which you want to delete:"<<endl;
cin>>bloodgroup;
for(int i=0;i<total;i++)
{
if(bloodgroup==arr3[i])
{
for(int j=i;j<total;j++)
{
arr1[j]=arr1[j+1];
arr2[j]=arr2[j+1];
arr3[j]=arr3[j+1];
arr4[j]=arr4[j+1];
arr5[j]=arr5[j+1];
}
total--;
cout<<"Your required record is deleted"<<endl;
ofstream out("database22.txt",ios::app);
		
	out<<arr1[i];cout<<endl;
	out<<arr2[i];cout<<endl;
	out<<arr3[i];cout<<endl;
	out<<arr4[i];cout<<endl;
	out<<arr5[i];cout<<endl;
	
	out.close();cout<<endl;
	}
}
}
 else 
{
cout<<"Invalid input";
}
}
}
int main()
{
int total=0;
int value;
database d1;
d1.login();
while(true)
{
cout<<"\n OPTIONS:";	

cout<<"\n";
cout << "\n\t\t\t|-------------------------------------------|" << endl;
cout<<"\t\t\t\t|| 1] Press 1 to enter data:  ||"<<endl;
cout<<"\t\t\t\t|| 2] Press 2 to show data:   ||"<<endl;
cout<<"\t\t\t\t|| 3] Press 3 to search data: ||"<<endl;
cout<<"\t\t\t\t|| 4] Press 4 to update data: ||"<<endl;
cout<<"\t\t\t\t|| 5] Press 5 to delete data: ||"<<endl;
cout<<"\t\t\t\t|| 6] Press 6 to exit:        ||"<<endl;
cout << "\n\t\t\t|-------------------------------------------|" << endl;
cin>>value;
switch(value)
{
case 1:
d1.enter();
break;

case 2:
d1.show();
break;

case 3:
d1.search();
break;

case 4:
d1.update();
break;

case 5:
d1.deleterecord();
break;

case 6:
exit(0);

break;
default:
cout<<"Invalid input"<<endl;
break;
}
}
}
