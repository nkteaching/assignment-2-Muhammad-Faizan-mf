#include<iostream>
using namespace std;
void reverse() {
static char ch;//it will be created(initialized) once and it's value will be updated
//and can be shared between diff functions and updating the values
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
