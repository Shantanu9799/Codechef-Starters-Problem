#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin >> x;
	if(x < 3) {
	    cout << "GOLD";
	} else if(x < 6) {
	    cout << "SILVER";
	} else {
	    cout << "BRONZE";
	}
	return 0;
}
