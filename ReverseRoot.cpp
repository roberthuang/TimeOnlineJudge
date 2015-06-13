#include <iostream>
#include <math.h>
#include <iomanip>
#include<stdio.h>
using namespace std;
int main()
{

	unsigned long long t;
	int idex=0;
	double A[1024*128];
	
	
	/*aceept cin*/
	while(cin>>t)
	{
		A[idex]=sqrt(t);
		idex++;
		if (cin.eof()) break;
		
	}	
	
	
	
	
	
	
	/*print buffer*/
	for(int i=idex-1;i>=0;i--)
	{
		printf("%.4f\n",A[i]);
	}	
	
	
	
	
	
	return 0;
}	
