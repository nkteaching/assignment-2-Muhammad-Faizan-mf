#include<iostream>
using namespace std;
void reverse() {
char ch;//it was int type we change it to char as cin.get() inputs character
cin.get(ch);
if (ch != '\n')
reverse();
cout.put(ch);
}
int main(){
	//this function will print reverse of entered characters
	reverse();
	return 0;
}
