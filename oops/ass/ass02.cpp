//Program to find prime numbers within a range 
#include<iostream> //header file
using namespace std;

int main(){
	int i,a[10],f,m,j; //variables
	cout<<"Enter the Ten elements:"<<endl; //excepting values from user
	for(int i=0;i<10;i++)
	{
		cin>>a[i];   
    }
    cout<<"Prime numbers are:"<<endl;
    for (i=0;i<10;i++)  //loop statement
    {
    f=0;
    for(j=2;j<a[i];j++)
    {
    	m=a[i]%j;
    	if(m==0)  
    	{
    		f=1;
    		break; //break statement to break the loop
		}
    	
	}
	if(f==0)
	cout<<a[i]<<endl; // array of prime numbers only
    }
return 0;	
	
}   
