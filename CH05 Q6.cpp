#include<math.h>
#include<iostream>
#include<string.h>
using namespace std;
void int_to_str_recur(int n,	char s[])
{
	
    static int i;
	if(n/10)
    int_to_str_recur(n/10,s);
    else
    {	i = 0;
        if( n < 0)
            s[i++]='-';
    }
	
    s[i++]=abs(n)%10 +48;
	if(i%3==0 )
	s[i++]=',';
    s[i] = '\0';

}

int main(void)
{
    char s[100];
	cout<<"Enter the integer.\n";
	int n;
    cin>>n;
    int_to_str_recur(n,s);
    cout<<s;
    int a=0;
    
// cout<<endl;
//    for(int i=strlen(s)-1;i>=0;i--){
//    	if(i%3==0){
//		cout<<',';
//    	s[a]==',';
//		a+=1;
//	}
//		cout<<s[i];
//		s[a]=s[i];
//		a+=1;
//	}
//	for(int i=0;i<strlen(s);i++)
//    cout<<s[i];
    return 0;
}


