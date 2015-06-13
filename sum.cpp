#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int N;
	cin>>N;
	if(N>=1){
		cout<<(1+N)*N/2<<endl;
	}
	else{
		cout<<1-(1+abs(N))*abs(N)/2<<endl;
	}
	
	return 0;
}
