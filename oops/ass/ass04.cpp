// to find fabonacci series of given number
#include<iostream> //header file
using namespace std;
int main()
{
	int n,a=0,b=1,i,c; //variables
	cout<<"Enter the number:";
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(i=2;i<n;++i)   //loop
	{
	c=a+b;
	cout<<c<<" "; //to print fabonacci series
	a=b;
	b=c;
    }
return 0;		
}
