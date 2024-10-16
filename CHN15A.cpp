#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int a[x];
        int c=0,i;
        for(i=0;i<x;i++){
            cin >> a[i];
        }
        for(i=0;i<x;i++){
            int z=a[i]+y ;
            if(z%7==0){
                 c=c+1;
            }
        }
        cout << c << endl;
    }
}
