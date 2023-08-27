#include<iostream>
#include<math.h>
using namespace std;


void inverted_half_pyramid()
{
	int n=4;
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
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
	inverted_half_pyramid();
}
