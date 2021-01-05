#include <bits/stdc++.h>
using namespace std;
int V[105];
int W[105];
int dp[105][1000005];
int n;
int k;
int func(int idx, int w)
{
	if (dp[idx][w] > 0) return dp[idx][w];
	if (idx + 1 > n)
		return 0;

	int num1 = 0;
	if (w + W[idx] <= k)
		num1 = V[idx] + func(idx + 1, w + W[idx]);
	int num2 = func(idx + 1, w);

	return dp[idx][w] = max(num1, num2);
}
int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> W[i] >> V[i];
	}
	cout << func(0, 0);
}
