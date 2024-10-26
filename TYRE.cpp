#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int bike=2*x;
	    int car=y*4;
	    int total=bike+car;
	    cout << total << endl;
	}

}
