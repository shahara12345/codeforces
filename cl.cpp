#include <bits/stdc++.h>
using namespace std;
int main()
{
string a; int h=0,k=0;
cin>>a;
if (a[0]>=97)
    {
for (int i=1;i<a.size();i++)
    {
        if (a[i]>=65 && a[i]<=90)
            {
                h++;
            }
    }
    if (h==a.size()-1)
        {
            a[0]=a[0]-32;
            for (int i=1;i<a.size();i++)
                {
                    a[i]=a[i]+32;
                }
        }
    }
else
    {
        for (int i=0;i<a.size();i++)
            {
                if (a[i]>=65 && a[i]<=90)
                    {
                        k++;
                    }
            }
        if (k==a.size())
            {
                for (int i=0;i<a.size();i++)
                    {
                        a[i]=a[i]+32;
                    }
            }
    }
cout<<a<<endl;
}
