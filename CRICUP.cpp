#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y,d;
        cin >> x >> y >> d;
        int k;
        k=abs(x-y);
        if (k<=d){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}
