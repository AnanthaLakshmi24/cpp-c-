#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y ;
	    int z=x+1;
	    if (z<=y){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl; 
	    }
	}

}
