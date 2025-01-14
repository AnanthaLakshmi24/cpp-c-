#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,x,b,y,k,p;
	    cin >> a >> x >> b >> y;
	    k=a+b;
	    p=x+y;
	    if (k==180 and p==180){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
}

