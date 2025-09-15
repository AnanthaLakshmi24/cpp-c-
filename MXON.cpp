#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
	cin>>T;
	int N , K;
	for(int j =1 ; j<= T ; j++){
	    cin>>N >>K;
	    string S(N , '\0');
	    cin>>S;
	    int count =0;
	    for(int p =0 ; p< K ; p++){
	        for(int i =0 ; i< N-1 ; i++){
	            if(S[i] == '0' && S[i+1]== '1'){
	            S[i] ='1';
	            break;
	            }
	        }
	    }
	     for(int m =0 ; m<N ; m++){
	        if(S[m]=='1')
	        count++;   
	    }
	    cout<<count;
	    cout<<endl;
	}
return 0;
}
