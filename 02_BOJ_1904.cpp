#include <bits/stdc++.h>
using namespace std;
int d[1000005];
int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    d[1] = 1;
    d[2] = 2;
    for(int i=3; i<=n; i++) {
        d[i] = d[i-2] + d[i-1];
        d[i]%=15746;
    }
    cout << d[n];
}
