#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int x, y, z;
	cin >> x >> y >> z;
	int possibility1 = (x * y) % z;
	int possibility2 = (x * z) % y;
	int possibility3 = (z * y) % x;
	if(possibility1 == 0) {
	    cout << x * y << " " << z << endl;
	}
	else if(possibility2 == 0) {
	    cout << x * z << " " << y << endl;
	}
	else if(possibility3 == 0){
	    cout << y * z << " " << x << endl;
	} else {
	    cout << -1 << endl;
	}
	}
	return 0;
}
