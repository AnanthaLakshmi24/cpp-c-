#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    int k=x+y;
	    int l=y+z;
	    int m=x+z;
	    if (k>l  && k>m){
	        cout << k << endl;
	    }
	    else if(l>k && l>m){
	        cout << l << endl;
	    }
	     else if (m>l && m>k){
	        cout << m<< endl;
	    }
	}

}
