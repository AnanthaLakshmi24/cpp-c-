#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    int x= a+b;
	    int y=c+d;
	    if (x>=y){
	        cout << y << endl;
	    }
	    else{
	        cout << x << endl;
	    }
	}

}
