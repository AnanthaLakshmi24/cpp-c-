#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    float hra;
	    float da;
	    float gross_salary;
	    if (x<1500){
	         hra=x*0.1;
	         da=x*0.9;
	    }
	    else{
	        hra=500;
	        da=x*0.98;
	    }
	    gross_salary=x+hra+da;
	    cout << fixed << setprecision(2)<< gross_salary<< endl;
	}

}
