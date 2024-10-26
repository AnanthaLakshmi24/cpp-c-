#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int d=x-y;
	    if (d%2==0){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	}

}
