#include <iostream>
using namespace std;

int main(){
	
	int x,y,z,x1,y1,z1,g=0;
	
	cin>>x;
	int a[x];
	for(int i=1;i<=x;i++){
		cin>>x1;
		a[i]=x1;
		//cout<<a[i]<<endl;
	}
	
	cin>>y;
	int b[y];
	for(int j=1;j<=y;j++){
		cin>>y1;
		b[j]=y1;
		//cout<<b[j]<<endl;
	}
	
	cin>>z;
	int c[z];
	for(int k=1;k<=z;k++){
		cin>>z1;
		c[k]=z1;
		//cout<<c[k]<<endl;
	}
	
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			if (a[i]==b[j]){
				for(int k=1;k<=z;k++){
					if (a[i]==c[k]){
						g++;
					}
					else {
					}
				}
			}
			else {
			}
		}
	}
	
	cout<<g<<endl;
	return 0;		
	
	
	
	
}
