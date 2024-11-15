#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        int x,y,z,a;
        cin >> x >>y >> z >> a;
        int c=x*y*z;
        int k=a*a*a;
        if (c>k){
            cout << "Cuboid" << endl;
        }
        else if (c==k){
            cout << "Equal" << endl;
        }
        else{
            cout << "Cube" << endl;
        }

}
