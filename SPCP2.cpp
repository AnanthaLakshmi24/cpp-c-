#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,p,k;
	    cin >> x>>y;
	    p=ceil(static_cast<double>(y) / 100);
	    if(x<=p){
	        cout << (p-x) << endl;
	    }
	    else{
	        cout << "0" <<endl;
	    }
	}
}
    