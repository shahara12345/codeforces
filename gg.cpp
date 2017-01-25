#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000][3];
	int count=0,num=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++)
			cin>>a[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			if(a[i][j]==1)
				count++;
		}
		

			if(count>=2)
				num++;
		count=0;

	}
	cout<<num;
}