#include <bits/stdc++.h>
using namespace std;

string DiceNumber(int A[], int B[]) {
    sort(A, A+3);
	sort(B, B+3);
	for(int i = 2; i >= 0; i--) {
	   if(A[i] > B[i]) {
	        return "Alice";  
	   } else if(A[i] < B[i]) {
	       return "Bob";
	   }
	}
	return "Tie";
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int A[3], B[3];
	    for(int i = 0; i < 3; i++) {
	        cin >> A[i];
	    }
	    for(int i = 0; i < 3; i++) {
	        cin >> B[i];
	    }
	    cout << DiceNumber(A, B) << endl;
	}
	return 0;
}
