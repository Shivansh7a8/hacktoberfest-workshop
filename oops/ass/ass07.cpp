//searching elements in array using Linear search
#include<iostream> //header file
using namespace std;
int main()
{
	int a[100],n,f=0,v,i; //variables
	cout<<"Enter the number of values to search:"; //number of values to enter
	cin>>n;
	//conditional statement
	if(n>100)
	{
	cout<<"Out of range"<<endl;
    }
	else
	{
		cout<<"Enter "<<n<<" Values"<<endl; 
	}
	//loop
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the value to search:"; //excepting values
	cin>>v;
	for (i=0;i<n;i++)
	{
	if(a[i]==v)
	{
		cout<<v<<" is found at index"<<i; //primt value index
		f=1;
	}
	break;	
	}
	if(f==0)
	{
		cout<<"\nValue not found"<<endl; //print if value not found
	}
	
return 0;	//return statement
}
