//to print max and min of element
#include<iostream> //header file
using namespace std;

int main()
{
	int a[10]; //array variable of 10 elements
	int s=0;
	cout<<"Enter the elements:"<<endl; //input from user
	for(int i=0;i<10;i++) //loop statement
	{
		cin>>a[i];
    }
    for (int i=0;i<10;i++)
	 {
	  if(a[0]<a[i])      //conditional statement
	  a[0]=a[i];
    }
	cout<<"Maximum of element is:"<<a[0]; //print max of elements
	for (int i=0;i<10;i++)
	 {
	  if(a[0]>a[i])     //conditional statement
	  a[0]=a[i];
    }
	cout<<"\n"<<"Minimum of element is:"<<a[0]; //print min of elements
	
return 0;	
}
