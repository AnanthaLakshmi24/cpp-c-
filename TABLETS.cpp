#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >>y;
        int z=3*x; 
        if (y>=z){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
