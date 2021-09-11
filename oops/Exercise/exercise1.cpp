#include<iostream>
using namespace std;

int main()
{
double mealcost;
int tippercent,taxpercent,totalcost; //required variables 
float tip,tax;
cout<<"Enter the Meal Cost:";        //input from user
cin>>mealcost;
cout<<"Enter the Tip Percent:";
cin>>tippercent;
cout<<"Enter the Tax Percent:";
cin>>taxpercent;
tip=mealcost*tippercent*0.01;      //to calculate tip percent
tax=mealcost*taxpercent*0.01;      //to calculate tax percent
totalcost=mealcost+tip+tax;
cout<<"TotalCost is: "<<totalcost; //to print total payable amount
return 0;
	
}
