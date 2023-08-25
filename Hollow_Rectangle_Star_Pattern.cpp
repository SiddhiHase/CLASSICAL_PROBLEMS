#include<iostream>
#include<math.h>
using namespace std;

void hollow_rectangle(int n)
{
		  
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0 || i==(n-1) || j==0 || j==(n-1))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}

	
}

int main()
{
	hollow_rectangle(15);
}
