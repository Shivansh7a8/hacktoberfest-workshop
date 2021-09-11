#include<iostream> //header file
using namespace std;
int main(){
	int n,i;
	cout<<"Enter a number:"; //input from user
	cin>>n;
	i=1;
	while(i<=10)  //for loop 
	{
		cout<<n<<"x"<<i<<"="<<n*i<<"\n"; // print table
		i++;
	}
return 0;
}
