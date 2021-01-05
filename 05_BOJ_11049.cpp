#include <bits/stdc++.h>
using namespace std;
const int MX = 502;
int row[MX];
int col[MX];
int dp[MX][MX];
int func(int st, int en) {
	if (dp[st][en] > 0) return dp[st][en];
	if (st + 1 > en) return 0;

	// 0 ~ 1
	// ab  bc
	int mm = 987654321;
	for (int k = st; k < en; k++) {
		mm = min(mm, func(st, k) + func(k + 1, en) + row[st] * col[k] * col[en]);
	}

	return dp[st][en] = mm;
}
int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> row[i] >> col[i];
	cout << func(0, n - 1);
}
