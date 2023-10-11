#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int x, y;
	    cin >> x >> y;
	    cout << min(x/y, 20) << endl;
	}
	return 0;
}