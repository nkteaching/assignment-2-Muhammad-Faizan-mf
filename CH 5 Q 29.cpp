#include<iostream>
using namespace std;
void recur(int n){
	if(n==0)
	return;
	
	recur(n-1);
	cout<<n*n<<endl;
}
main(){
	//input n
	cout<<"Enter number\n";
	int n;
	cin>>n;
	cout<<"Printing square 1 to n\n";
	recur(n);
}
