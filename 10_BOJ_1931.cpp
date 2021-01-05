#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> V;
bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) return a.first < b.first;
	else return a.second < b.second;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		V.push_back({ x,y });
	}
	sort(V.begin(), V.end(), cmp);
	stack<int> S;
	for (int i = 0; i < n; i++) {
		if (S.empty()) {
			S.push(V[i].second);
			continue;
		}
		if (S.top() <= V[i].first) S.push(V[i].second);
	}
	cout << S.size();
}
