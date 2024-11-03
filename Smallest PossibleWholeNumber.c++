#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if (y==0){
	        cout << x << endl;
	    }
	    else{
	        cout << x % y << endl;
	    }
	}

}
