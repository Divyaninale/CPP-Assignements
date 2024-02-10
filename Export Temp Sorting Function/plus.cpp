#include "plus.hpp"
template <typename T>
void SortingType( T *array, int n)
{
	T temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp = array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	cout<<"\nArray After Swapping : ";
	for(int k=0;k<n;k++)
	{
		cout<<"  "<<array[k];
	}
}
