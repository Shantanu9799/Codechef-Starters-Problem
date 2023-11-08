#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    long long xy = x * y;
	    long long zMIN =  z * 24 * 60;
	    if(xy <= zMIN) {
	        cout << "YES";
	    } else {
	        cout << "NO";
	    }
	    cout << endl;
	}
	return 0;
}
