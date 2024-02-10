
#include<iostream>
using namespace std;
class weather_report
{
	public:
    int hightemp,lowtemp,amtrain,amtsnow;          //member veriable
	int DOM;
	weather_report()  
	{                              //constructor
	int DOM=99;
	int hightemp=999;
	int lowtemp=999;
	int amtrain=0;
	amtsnow=0;
	}

    int getdata()
    {
    	cout<<"\n enter the date of month:";
    	cin>>DOM;
	    cout<<"\n enter the high temprature:";
	    cin>>hightemp;
	    cout<<"\n enter the low temprature:";
     	cin>>lowtemp;
	    cout<<"\n enter the amount of rain:";
	    cin>>amtrain;
     	cout<<"\n enter the amount of snow:";
	    cin>>amtsnow;
	}

    int display()
	{
		cout<<"\n\t"<<DOM<<"\t\t"<<amtrain<<"\t\t"<<amtsnow<<"\t\t"<<hightemp<<"\t\t"<<lowtemp;
	}
	

};
int main()
{
	weather_report w[31];
	int ch,i,j=0,k,n,x,pr=0, flag;
	do
	{
		cout<<"\nmenu:";
		cout<<"\n 1.getdata \n 2.putdata \ns 3.exit";
		cout<<"\n enter the choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					int flag=0;
				
			    	cout<<"enter the no. of days:";
				    cin>>n;
				    n=n+j;
				    for(i=j;i<n;i++)
				    {
					  flag=0;
					  w[i].getdata();
					  for(k=0;k<i;k++)
					  {
						if(w[i].DOM==w[k].DOM)
						{
					     	cout<<"\n record is available:";
							cout<<"Enter another day data:";
							i--;
							flag=1;
						}
					  }
					    if(flag==0)
					    {
						  if(0<w[i].DOM  && w[k].DOM<=31)
						  {
							j++;
					      }
					      else
				          {
						   cout<<"\n invalid day....!!";
						   i--;
				          }
					    } 
			        }
			        break;
			    }
			        
			        case 2:
			        	{
						
					       float avgrain,avgsnow,avghightemp,avglowtemp;
					       float sumrain=0,sumsnow=0,sumhightemp=0,sumlowtemp=0;
				           for(i=0;i<n;i++)
		                    {
					        	sumrain=sumrain+w[i].amtrain;
					        	sumsnow=sumsnow+w[i].amtsnow;
						        sumhightemp=sumhightemp+w[i].hightemp;
						        sumlowtemp=sumlowtemp+w[i].lowtemp;
				        	}
				        	avgrain=sumrain/n;
				        	avgsnow=sumsnow/n;
				        	avghightemp=sumhightemp/n;
				        	avglowtemp=sumlowtemp/n;
				        	cout<<"\tDay\t"<<"\tamtrain\t"<<"\tamtsnow\t"<<"\thightemp\t"<<"\tlowtemp\t";
				        	for(i=0;i<n;i++)
				         	{
					        	w[i].display();
					        	cout<<endl<<endl;
				        	}
				        	cout<<endl<<endl;
					        cout<<"\tAvg\t\t"<<avgrain<<"\t\t"<<avgsnow<<"\t\t"<<avghightemp<<"\t\t"<<avglowtemp;
				        	break;
		
				        }
					
    	}
					
	
	}while(ch!=3);
		
	
		
	
	
	
}































