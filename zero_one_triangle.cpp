#include<iostream>
#include<math.h>
using namespace std;

void zero_one_triangle(int n)
{
	
	for(int i=1;i<=n;i++)
	{
		
		for(int j=1;j<=i;j++)
		{
			if( (i+j)%2==0 )
			{
				cout<<"1"<<"\t";
			}
			else
			{
				cout<<"0"<<"\t";
			}
		}
		
		cout<<"\n";
		
	}	
}


int main()
{
	zero_one_triangle(6);
}
