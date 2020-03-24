#include<iostream>
using namespace std;
int mul(int a,int b)
{
	
	if(b==0)
	return 0;
	if(b>0)
	return a+mul(a,b-1);
	if(b<0)
	return -mul(a,-b);
}
main(){
	int a,b;
	cin>>a;
	cin>>b;
	int c=mul(a,b);
		cout<<c;
}
