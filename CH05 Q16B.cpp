#include<iostream>
#include<string.h>
#include<bits/stdc++.h> 

using namespace std;
void remove(char *s){
	if(s==NULL)
	return;
	int n=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]!=' ' && s[i]!=',' &&s[i]!='’'  )
		s[n++]=s[i];
		
	}
	s[n]='\0';	
}
bool palin_recurr(char str[],int start,int end){
	

	if(start==end)
	return true;
		str[start]=tolower(str[start]);
		str[end]=tolower(str[end]);
	if(str[start]!=str[end])
	return false;
	if(start<end+1)
	return palin_recurr(str,start+1,end-1);
	return true;
	
}
main(){
	char str[]="MaDam, I’M Adam";
	remove(str);
	
//	cout<<str<<endl;
//	    transform(str.begin(), str.end(), str.begin(), ::tolower); 
//	for(int i=0;i<strlen(str);i++)
//	putchar(tolower(str[i]));
//	cout<<endl<<str;
	if(palin_recurr(str,0,strlen(str)-1)==true)
	cout<<"Is palindrome";
	else
	cout<<"Is not palindrome";
	 
}
