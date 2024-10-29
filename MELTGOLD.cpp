#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int initial,melt,i=0;
	    cin >> melt >> initial;
	    while (initial<melt){
	        i=i+1;
	        initial=initial+i;
	    }
	    cout << i<< endl;
	    }
}

