#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,x,y,k,p;
	    cin >> a >> b >> x >> y;
	    k=a*y;
	    p=b*x;
	    if (k>p){
	        cout << "Chefina" << endl;
	    }
	    else if (k==p){
	       cout << "Both" << endl;
	    }
	    else{
	        cout << "Chef" << endl;
	    }
	}
}
