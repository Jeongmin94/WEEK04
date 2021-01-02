#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MX = 92;
ll arr[MX];
int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ll n; cin >> n;
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2; i<=n; i++) {
        arr[i] = arr[i-1]+arr[i-2];
    }
    cout << arr[n];
}
