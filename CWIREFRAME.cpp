#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    int peri=2*(x+y);
	    int cost=z*peri;
	    cout << cost<< endl;
	}

}
