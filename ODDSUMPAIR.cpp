#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    if ((x+y)%2==1){
	       cout << "YES"  << endl;  
	    }
	    else if ((x+z)%2==1){
	        cout << "YES" << endl;
	    }
	    else if((y+z)%2==1){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}

}
