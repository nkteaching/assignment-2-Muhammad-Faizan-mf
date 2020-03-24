#include<iostream>
using namespace std;
void cubes(int n){
	static int a=1;
	
	if(a==n+1)
	return;
	
	cout<<a*a*a<<endl;
	++a;
	cubes(n);
}
main(){
	int n;
	cin>>n;
	cubes(n);
}
