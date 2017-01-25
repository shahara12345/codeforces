#include <iostream>
using namespace std;
int main()
{
	int x,y;
	int n,c=0;
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		if((y-x)>=2)
		{
			c++;
		}
	}
	cout<<c;
	return 0;

}