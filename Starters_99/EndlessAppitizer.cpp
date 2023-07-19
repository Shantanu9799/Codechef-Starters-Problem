#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int x, y, r;
	    cin >> x >> y >> r;
	    r = r / 30;
	    x = x + r;
	    int result =  x / y;
	    int rem = x % y;
	    if(rem == 0) {
	        cout << result << endl;
	    } else {
	        cout << result + 1 << endl;
	    }
	}
	return 0;
}