#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    int burger=x*y;
	    if (burger<=z){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}

}
