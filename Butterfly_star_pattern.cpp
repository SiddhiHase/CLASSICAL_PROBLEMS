#include<iostream>
using namespace std;

void butterfly(int n)
{
	
	for(int i=1;i<=n;i++)
	{
		
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		for(int j=1;j<=2*(n-i);j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
		
	}
	
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		for(int j=1;j<=2*(n-i);j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
		
	}		
}

int main()
{
	butterfly(13);
}
