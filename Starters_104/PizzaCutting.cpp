#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int cuts;
	    cin >> cuts;
	    if((cuts == 0) || (cuts != 1 && (cuts & 1) == 1)) cout << "No";
	    else cout << "Yes";
	    
	    cout << endl;
	}
	return 0;
}
