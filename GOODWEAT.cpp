#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int a[7];
	    int i,s=0,r=0;
	    for(i=0;i<7;i++){
	        cin >> a[i];
	    }
	    for(i=0;i<7;i++){
	        if (a[i]==1){
	            s=s+1;
	        }
	        else{
	            r=r+1;
	        }
	        
	    }
	    if (s>r){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }

    }
}
