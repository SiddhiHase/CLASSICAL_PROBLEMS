#include<iostream>
#include<math.h>
using namespace std;

void half_pyramid(int n)
{		
	for(int i=0;i<=n;i++)
	{
		for(int j=n;j>=n-i;j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}

int main()
{
	half_pyramid(10);
}
