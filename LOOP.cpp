#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >>y >>z;
	    int d1=(y-x+z)%z;
	    int d2=z-d1;
	    cout << min (d1,d2) << endl; 
	    
	    
	}

}
