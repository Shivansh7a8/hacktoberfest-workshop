//program to sort the array
#include<iostream> //header file
using namespace std;
int main(){
	int i,j,t,a[10],l,m; //variables
	cout<<"Enter the elements:"<<endl;
		for(i=0;i<10;i++) //loop
	{
		cin>>a[i];
	}
	cout<<endl;
	for(i=0;i<9;i++)
	{
		m=a[i];
		l=i;
		for(j=i+1;j<10;j++) 
		{
			if(m>a[j])   //conditional statement
			{
				m=a[j];
			l=j;
			}
		}
		t=a[i];
		a[i]=a[l];
		a[l]=t;
	}
	cout<<"Sorted array is:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" "; //print sorted array
	}
	
	return 0;
}
