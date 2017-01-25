#include <iostream>
using namespace std;
int main()
{
	int n,w,k,sum=0,d,r;
	cin>>n>>w>>k;
	for(int i=1;i<=k;i++)
	{
		
		sum=sum+i*n;
	}
	d=sum-w;
	if(d<0)
	{
	    cout<<"0";
	}
	else
	{
	cout<<d;
	}
	return 0;
}