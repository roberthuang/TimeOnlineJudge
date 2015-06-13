#include<iostream>
using namespace std;
int main(){
	int N,x1,i,j;
	cin>>N;
	int a[N+1][N+1];
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			cin>>x1;
			a[i][j]=x1;
		}
	}
	
	for(i=2;i<=2*N;i++){
		for(j=N;j>=1;j--){
			if (i-j>=1&&i-j<=N){
				cout<<a[j][i-j]<<" ";
			}
		}
	}
	
}
		
