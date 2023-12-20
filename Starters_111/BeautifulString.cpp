#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

long long countBeautifulStrings(const string& S) {
    vector<int> charCount(26, 0);

    for (char c : S) {
        charCount[c - 'a']++;
    }

    long long result = 1;
    for (int count : charCount) {
        result = (result * (count + 1)) % MOD;
    }

    return result-1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        long long answer = countBeautifulStrings(S);
        cout << answer << endl;
    }

    return 0;
}
