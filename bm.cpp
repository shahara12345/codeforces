#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
			if(a[i][j]!=0)
			{
				int d=abs(i-2)+abs(j-2);
				cout<<d;
			}
		}
	}

	return 0;
}