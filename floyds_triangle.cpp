#include<iostream>
#include<math.h>
using namespace std;




void floyds_triangle(int n)
{
	int count=1;	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<count<<"\t";
			count++;
		}
		
		cout<<"\n";
	}		
}

int main()
{
	floyds_triangle(6);
}
