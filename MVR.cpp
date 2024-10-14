#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int k=(2*a)+b ;
    int l=(2*x)+y; 
    if (k>l){
        cout << "Messi" << endl;
    }
    else if (l>k){
        cout << "Ronaldo" << endl;
    }
    else{
        cout <<"Equal" << endl;
    }
}
