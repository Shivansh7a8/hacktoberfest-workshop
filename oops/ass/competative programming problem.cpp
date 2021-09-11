//Competative problem
#include<iostream>
using namespace std;
int main()
{
	int a,i,j;
	float s=0;
	cin>>a;
	float n[a][3],p[i],q[a];
	for(i=0;i<a;i++)
	{
		for(j=0;j<3;j++)
		{
		cin>>n[i][j];
		s=s+n[i][j];
	    }
	    p[i]=s/3;
	    s=0;
	}
    for(j=0;j<a;j++)
	{
    	q[j]=p[j];
    	if(q[0]<p[j])
    	{
    	p[0]=p[j];
		}
	}
	for(i=0;i<a;i++)
	{
		if(q[i]==p[0])
		{
		cout<<p[i];
		}
	}
	
	return 0;
}
