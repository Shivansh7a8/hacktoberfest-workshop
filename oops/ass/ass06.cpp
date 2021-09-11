//to print reverse of element
#include<iostream> //header file
using namespace std;

int main()
{
	int a[10],s; //variables
	cout<<"Enter the elements:"<<endl;
	//loop
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for (int i=9;i>=0;i--)
	{
	cout<<a[i]<<" ";//print reverse of array
    }
return 0;	
}
