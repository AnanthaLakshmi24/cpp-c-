#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >>y >>z;
	    int k=y*z;
	    if (k>=x){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	}

}
