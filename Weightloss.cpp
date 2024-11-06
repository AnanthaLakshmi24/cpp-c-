#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int w1,w2,x1,x2,m;
	    cin >> w1 >> w2 >> x1 >> x2 >> m;
	    int k=abs(w1-w2);
	    int x=x1*m;
	    int y=x2*m;
	    if (x<=k and k<=y)
	    {
	        cout << "1" << endl;
	    }
	    else{
	        cout << "0" << endl;
	    }
	}
}
