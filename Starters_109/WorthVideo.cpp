#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int s;
	    cin >> s;
	    s = (s * 24) * 1000;
	    cout << s << endl;
	}
	return 0;
}
