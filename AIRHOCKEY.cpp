#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    if (x>=y){
	        int z=7-x;
	        cout << z << endl;
	    }
	    else{
	        int z=7-y;
	        cout << z << endl;
	    }
	}

}
