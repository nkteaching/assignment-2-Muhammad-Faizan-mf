#include<iostream>
using namespace std;
float series(int n,float a,int check){
	//base case check
	if(a>n)
	return 0;
	//condition
	if (check%2==0 || check==1)
	{
		return 1/a + series(n,a+1,check+1);
	}
	//condition check
	else if(check!=1)
		return -1/a + series(n,a+1,check+1);
	
	
//	static float s=0;
//	static int a=1;
//	s=1/a;
	//	a++;
//	return 1/n +series(n-1);
	
	
	
//	if(n<1)
//	return 0;
//	 static int a=5;
////	int s=0;
//	if(a==1)
//	cout<<"1"<<"  ";
//	else
//	cout<<"1/"<<a<<"  ";
////	
////	s+=1/a;
//	return ((1/a++) + series(n-1));
	
}
main(){
	int n;
	cin>>n;
	cout<<endl<<series(n,1,1);
	
}
