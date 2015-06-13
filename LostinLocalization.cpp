#include <iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	if (t>=1000){
		cout<<"legion";
	}
	else if (t>=500){
		cout<<"zounds";
	}
	else if (t>=250){
		cout<<"swarm";
	}
	else if (t>=100){
		cout<<"throng";
	}	
	else if (t>=50){
		cout<<"horde";
	}
	else if (t>=20){
		cout<<"lots";
	}
	else if (t>=10){
		cout<<"pack";
	}
	else if (t>=5){
		cout<<"several";
	}
	else {
		cout<<"few";
	}
	return 0;
}
