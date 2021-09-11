#include<iostream> //header file
using namespace std;
int main(){
	int n,i;
	cout<<"Enter a natural number:"; //input from user
	cin>>n;
	do                   //do while loop 
	{
		cout<<i*i<<"\n"; //output
		i++;
	}while(i<n);  
return 0;
}
