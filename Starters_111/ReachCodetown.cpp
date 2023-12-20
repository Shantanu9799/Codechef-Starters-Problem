#include <iostream>
using namespace std;

string canReach(string s) {
    int vowel = 0;
    for(int i = 0; i < s.length(); i++) {
        if(i==1 || i==3 || i==5) {
            if (s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U') {
                return "NO";
            }
        } else {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                return "NO";
            }
        }
    }
    return "YES";
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    string s;
	    cin >> s;
	    cout << canReach(s) << endl;
	}
	return 0;
}
