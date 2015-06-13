#include<iostream>
using namespace std;

int main(){

	int n,m;
	
	cin>>n;
	m=(n+1)*((n-1)+1)/2;
	//cout<<m<<endl;
	if(m%2==0){
		cout<<"black"<<endl;
	}
	else{
		cout<<"grimy"<<endl;
	}
		
	
	return 0;
}
