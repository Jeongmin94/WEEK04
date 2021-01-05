#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}
int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<pair<int, int>> V;
		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			V.push_back({ x, y });
		}
		sort(V.begin(), V.end(), cmp);
		
		pair<int, int> result = V[0]; // 서류 1등 합격 고정
		int ans = 1;
		for (int i = 1; i < n; i++) {
			int tmp = V[i].second;
			if (tmp < result.second) {
				ans++;
				result = V[i];
			}
		}
		cout << ans << '\n';
	}
}
