#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,k;
	    cin >> x;
	    k=x/10;
	    if (x%10==0){
	        cout << k<< endl;
	    }
	    else{
	        cout << k+1 << endl;
	    }
	    
	}

}
