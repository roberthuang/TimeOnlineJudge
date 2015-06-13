#include <iostream>
using namespace std;

int main()
{
	int n,x,m,j,z,k=2;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a[i]=x;
		//cout<<a[i]<<endl;
	}
	m=a[1]+a[2]+a[3];
	//cout<<m<<endl;
	for(j=2;j<=n-2;j++)
	{
		z=a[j]+a[j+1]+a[j+2];
		//cout<<z<<endl;
		if (m<z)
		{
			k=j+1;
			m=z;
		}
		else
		{	
			
			m=m;
		}
		
	}
	cout<<m<<" "<<k<<endl;
	return 0;
}
