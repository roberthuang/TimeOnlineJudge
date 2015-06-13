#include<iostream>
using namespace std;

int main()
{
	int m,n,k;
	cin>>m>>n;
	k=m*n;
	if (k%2==0)
	{
		cout<<"[:=[first]"<<endl;
	}
	else
	{
		cout<<"[second]=:]"<<endl;
	}
	
	return 0;
}
