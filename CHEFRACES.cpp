#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,a,b,g_m;
	    cin >> x >> y >> a >> b;
	    g_m=2;
	    if (x==a || x==b){
	        g_m=g_m-1;
	    }
	    if (y==a || y==b){
	        g_m-=1;
	    }
	    cout << (g_m) << endl;
	}

}
