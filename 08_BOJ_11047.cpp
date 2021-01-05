#include <bits/stdc++.h>
using namespace std;
int arr[15];
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> arr[i];
	int cnt = 0;
	for (int i = n - 1; i >= 0; i--) {
		int tmp = k / arr[i];
		cnt += tmp;
		k %= arr[i];
	}
	cout << cnt;
}
