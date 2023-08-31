#include<iostream>
using namespace std;

void solid_rhombus(int n)
{
	for(int i=1;i<=n ;i++)
	{
		for(int j=1; j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1; j<=n;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}


int main()
{
	solid_rhombus(13);
	
}
