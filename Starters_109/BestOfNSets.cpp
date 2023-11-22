#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int x, y;
	    cin >> x >> y;
	    int ans = max(x, y);
	    ans = (ans * 2) - 1;
	    cout << ans << endl;
	}
	return 0;
}
