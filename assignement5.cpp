#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class person
{
    private:
    char name[40],dob[15],bdg[15];
    int h,w;
    public:
    static int count;
    friend class personal;
    person()
    {
        char * name=new char[40];
        char *dob=new char[80];
        char *bdg=new char[15];
        h=w=0;
    }
    static void recordcount()
    {
        cout<<"\n Total no of records :"<<count;
    }
};

class personal
{
private:
  char add[70],telephone[15],policy_no[10];
public:
 personal()
{
    strcpy(add,"");
    strcpy(telephone,"");
    strcpy(policy_no,"");
}
void getdata(person *obj);
void displaydata(person *obj);
friend void exit();
friend class person;
};
void exit()
{
	cout<<" program exited.........!!!";
}

int person::count=0;
inline void personal::getdata(person *obj)
{
<<Person"\n Enter  of =";
cin>>obj->name;
cout<<"\n Enter date of birth of person=";
cin>>obj->dob;
cout<<"\n Enter blood group of person=";
cin>>obj->bdg;
cout<<"\n Enter height and weigth of person=";
cin>>obj->h>>obj->w;
cout<<"\n Enter Contact no of person=";
cin>>this->telephone;
cout<<"\n Enter addreass of person=";
cin>>this->add;
cout<<"\n Enter the insurance policy no=";
cin>>this->policy_ncoutNameo;
obj->count++;
}
void personal::displaydata(person *obj)
{

cout<<cout<<"\nname="<<obj->name;
"\nDOB="<<obj->dob;
cout<<"\nBlood group="<<obj->bdg;
cout<<"\nheight="<<obj->h ;
cout<<"\nweight="<<obj->w;
cout<<"\ntelephone="<<this->telephone;
cout<<"\npolicy no.="<<this->policy_no;
cout<<"\nAddress="<<this->add;
}
int main()
{
personal *p1[30];
person *p2[30];
int n=0,ch,i;
do
{
cout<<"\n Menu";
cout<<"\n 1.Information of Person \n 2.Display Information \n 3.Exit";
cout<<"\n Enter your choice";
cin>>ch;
switch(ch)
{
case 1:
 cout<<"\n Enter The Information";
 cout<<"\n";
 p1[n]=new personal;
 p2[n]=new person;
 p1[n]->getdata(p2[n]);
n++;
person::recordcount();
break;
case 2:
cout<<"\n";
for(i=0;i<n;i++)
{
cout<<"Information=";
p1[i]->displaydata(p2[i]);
exit();

}
person::recordcount();
//delete [] name;
//delete [] dob;
break;
}
}while(ch!=4);
return 0;
}

