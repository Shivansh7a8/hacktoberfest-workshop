//competative programming
#include<iostream> //header file
using namespace std;
int main(){
	int i,j;
	int n;
	float a,avg[i],s=0; //variables
	cout<<"Enter the number of participants:"; //no. of participants
	cin>>n;
	for(i=0;i<n;i++)//loop to accept n values
	{
	s=0;	
	for(j=0;j<3;j++) //loop to accept 3 values
	{
	cin>>a;
	s=s+a;
	}
	avg[i]=s/3;
	}//average of 3 values
	if(avg[0]>avg[1] && avg[0]>avg[2])
	{
	cout<<avg[0];	
	}
	else if(avg[1]>avg[0] && avg[1]>avg[2])
	{
	cout<<avg[1];	
	}
	else
	{
	cout<<avg[2];	
	}
	return 0;
}
