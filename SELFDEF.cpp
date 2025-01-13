#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--){
	    int n,i,c=0;
	    cin >> n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin >> a[i];
	    }
	    for (i=0;i<n;i++){
	        if (a[i]>=10 && a[i]<=60){
	            c=c+1;
	        }
	    }
	    cout << c << endl;
	}

}
