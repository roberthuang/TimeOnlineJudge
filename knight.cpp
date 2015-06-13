#include<iostream>

using namespace std;


int getanswer(int i,int j)
{
	int ans=0;
	
	if (j+2<=8){
		if (i+1<=8){
			ans++;
		}
		if (i-1>=1){
			ans++;
		}
	}
	
	if (j-2>=1){
		if (i+1<=8){
			ans++;
		}
		if (i-1>=1){
			ans++;
		}
	
	}	
	if (i-2>=1){
		if (j+1<=8){
			ans++;
		}
		if (j-1>=1){
			ans++;
		}
	}
	if (i+2<=8){
		if (j+1<=8){
			ans++;
		}
		if (j-1>=1){
			ans++;
		}
	}
	
	return ans;
	
}	
int main()
{
	int N,n;
	char c;
	cin>>N;
	while(N--)
	{
		cin>>c>>n;
		/*convert char to int*/
		cout<<getanswer(c-'a'+1,n)<<endl;
	}
		
	
	
	return 0;
}
	
	
	
	
	
	
	
