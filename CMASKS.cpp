#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int z=x*100;
	    int p=y*10;
	    if (z>=p){
	        cout << "Cloth" << endl;
	    }
	    else{
	        cout << "Disposable" << endl;
	    }
	}

}
