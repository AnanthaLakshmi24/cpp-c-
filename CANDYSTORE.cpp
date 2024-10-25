#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        // your code goes here
        if (x>=y){
            cout << y << endl;
        }
        else{
            int z=y-x;
            cout << x+(2*z) << endl;
        }
    }
	

}
