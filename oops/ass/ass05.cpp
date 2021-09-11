//To print largest and smallest element in array
#include<iostream> //header file
using namespace std;

int main()
{
	//variables
	int a[10];   
	int s=0;
	cout<<"Enter ten numbers:"<<endl;
	//loop
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
    }
    for (int i=0;i<10;i++)
	 {
	  if(a[-1]<a[i])
	  a[-1]=a[i];
    }
	cout<<"Largest number is:"<<a[-1]; //print largest number
	for (int i=0;i<10;i++)
	 {
	  if(a[0]>a[i])
	  a[0]=a[i];
    }
	cout<<"\n"<<"Smallest number is:"<<a[0]; //print smallest number
	
return 0;	
}
