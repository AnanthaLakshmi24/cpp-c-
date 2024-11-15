#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int z= x*3;
	    int p=y*2;
	    if (z>p){
	        cout << p << endl;
	    }
	    else{
	        cout << z << endl;
	    }
	}
}
