#include<iostream>
using namespace std;

int main()
{
    int num,i,j=0;
    
    cout<<"enter number:";
    cin>>num;
    
    
    for(i=1; i<=num; i++)
    {
        if((num%i)==0)
        {
            i++;
        }
    }
    if(j==2)
     cout<<"\n"<<num <<" is a prime number.\n";
    else
     cout<<num <<" is not a prime number.\n";
     
    return 0; 
    
}
