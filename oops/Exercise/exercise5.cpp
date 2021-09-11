# include<iostream> //header file
using namespace std;

int main()
{
	int n,a;
	cout<<"Enter a natural number:"; //input from user
	cin>>n;
	cout<<"Enter a natural number:"; //input from user
	cin>>a;
	if (n==1)                       //conditional statement
	{
	cout<<"ONE"<<endl;
    }
    else if (n==2)
	{
	cout<<"TWO"<<endl;
    }
    else if (n==3)
	{
	cout<<"THREE"<<endl;
    }
    else if (n==4)
	{
	cout<<"FOUR"<<endl;
    }
    else if (n==5)
	{
	cout<<"FIVE"<<endl;
    }
    else if (n==6)
	{
	cout<<"SIX"<<endl;
    }
    else if (n==7)
	{
	cout<<"SEVEN"<<endl;
    }
    else if (n==8)
	{
	cout<<"EIGHT"<<endl;
    }
    else if (n==9)
	{
	cout<<"NINE"<<endl;
    }
	if (a>9)
	{
	if(a%2==0)
	{
		cout<<"Even";
	}
	else
	{
		cout<<"odd";
	}
	}
	else
	{
	cout<<"Invalid Number!";	
	}
	return 0;
	
}

