#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    int f=1,i;
	    for(i=1;i<=x;i++){
	        f=f*i;
	    }
	    cout << f<< endl;
	}

}
