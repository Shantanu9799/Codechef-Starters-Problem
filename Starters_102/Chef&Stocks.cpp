#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr, int n) {
    int sum = 0;
    int mini = INT_MAX;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        mini = min(mini, arr[i]);
    }
    return sum - mini;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    for(int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    cout << maxProfit(arr, n) << endl;
	}
	return 0;
}