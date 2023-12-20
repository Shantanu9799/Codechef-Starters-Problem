#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    int totalStudent = x * y;
	    if(totalStudent/2 < z) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
