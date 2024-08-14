#include <bits/stdc++.h>
using namespace std;

int bfs(int X, int Y, vector<int>& A) {
    int N = A.size();
    vector<int> dist(N, -1);  // Distance initialized to -1
    queue<int> q;
    q.push(X);
    dist[X] = 0;
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        if (u == Y) return dist[u];  // If we reached Y, return the distance
        
        for (int j = 1; j <= A[u] && u + j < N; ++j) {
            int v = u + j;
            if (dist[v] == -1) {  // Not visited
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    
    return -1;  // If Y is not reachable from X
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, Q;
        cin >> N >> Q;
        
        vector<int> A(N + 1);
        for (int i = 1; i <= N; ++i) {
            cin >> A[i];
        }
        
        while (Q--) {
            int X, Y;
            cin >> X >> Y;
            cout << bfs(X, Y, A) << '\n';
        }
    }
    
    return 0;
}
