//to print reverse and sum of element
#include<iostream> //header file
using namespace std;

int main()
{
	int a[10],s=0;
	cout<<"Enter the elements:"<<endl; //input from user
	for(int i=0;i<10;i++) //for loop
	{
		cin>>a[i];
	}
	for (int i=9;i>=0;i--) //loop in reverse order
	{
		cout<<a[i];   //print reverse of array elements
		s=s+a[i];     // to sum array elements
	}
	cout<<"\n"<<"Sum of elements is:"<<s; //print =sum of array elements
return 0;	
}
