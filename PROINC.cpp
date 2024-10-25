#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int selling_price,profit;
	    cin >> selling_price >> profit;
	    int buying_price=selling_price-profit;
	    int new_sell_price=selling_price+(selling_price/10);
	    int new_profit=new_sell_price-buying_price;
	    cout << new_profit << endl;
	}

}
