#include<iostream>
#include<string.h>
using namespace std;
bool palin_recurr(char str[],int start,int end){
	if(start==end)
	return true;
	if(str[start]!=str[end])
	return false;
	if(start<end+1)
	return palin_recurr(str,start+1,end-1);
	return true;
	
}
bool check(char str[]){
	int len=strlen(str);
	if(len==0)
	return true;
	
	return palin_recurr(str,0,len-1);
			
}

main(){
	char str[]="madam";
//	cin>>str;
	if(check(str))
	cout<<"Entered string is palindrome.";
	else
	cout<<"Entered string is not palindrome.";
	
}

