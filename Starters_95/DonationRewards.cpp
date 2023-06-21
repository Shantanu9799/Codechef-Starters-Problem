#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int x;
	    cin >> x;
	   if(x <= 3) cout << "BRONZE" << endl;
	   else if(x <= 6) cout << "SILVER" << endl;
	   else cout << "GOLD" << endl;
	}
	return 0;
}