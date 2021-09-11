//to find factorial of given number
#include<iostream> //header file
using namespace std;
int main()
{
	int n,i;       //variables
	long int f=1;
	cout<<"Enter the number:";
	cin>>n;
	for(i=1;i<=n;i++)   //loop
	f=f*i;
	cout<<"Factorial of "<<n<<" is:"<<f; //to print factorial
	
return 0;	
}
