#include<iostream>

using namespace std;

int main(){
	
	int n,k,ans;
	cin>>n>>k;
	if (n<=k){
		cout<<2<<endl;
	}
	else{
		ans=(2*n)/k;
		if ((2*n)%k){
			ans++;
		}
		cout<<ans<<endl;
		
	}	
	return 0;
}
