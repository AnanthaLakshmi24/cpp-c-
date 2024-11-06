#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long s,a,b,c;
	    cin >> s >> a >> b >> c;
	    long long k = s * (100+c)/100;
	    if (k>=a && k<=b){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	}

}
