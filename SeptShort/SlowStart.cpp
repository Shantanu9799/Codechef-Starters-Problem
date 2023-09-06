#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int X, H;
	    cin >> X >> H;
	    int Xby2 = X / 2;
	    int Xby2M5 = Xby2 * 5;
	    int ans;
	    if(Xby2M5 > H) {
	        H = Xby2M5 - H;
	        ans = 5 - (H / Xby2);
	    } else {
	        H = H - Xby2M5;
	        ans = 5 + (H / X);
	        if(H%X > 0) {
	            ans ++;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}