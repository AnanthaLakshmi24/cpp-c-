#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
	// your code goes here
	int x=a+b+(a*b) ;
	if (x==111){
	    cout << "Yes" << endl;
	}
	else{
	    cout << "No" << endl;
	}
	return 0;
}
