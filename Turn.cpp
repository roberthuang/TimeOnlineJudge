#include <iostream>

using namespace std;

int main(){
	int x,y,x1,sum1=0;
	
	cin>>x>>y;
	int sum[y];
	for (int i=0;i<=y-1;i++){
	
		cin>>x1;
		if (x1<=x){
			sum[i]=0;
		}
		else{
			sum[i]=x1-x;
		}
		sum1=sum1+sum[i];
		
	}
	cout<<sum1<<endl;
	
	return 0;
	
}

		
