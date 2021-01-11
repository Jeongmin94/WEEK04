#include <bits/stdc++.h>
using namespace std;
const int MX = 105;
int tab[MX];
int item[MX];
int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n, k;
	cin >> n >> k;
	for(int i=0; i<k; i++) cin >> item[i];
	int cnt = 0;
	for(int i=0; i<k; i++) {
		bool empty = 1;
		// 중복 체크 => 새로 꽂을 필요 없음
		for(int j=0; j<n; j++) {
			if(tab[j] == item[i]) {
				empty = 0;
				break;
			}
		}
		if(!empty) continue;

		// 멀티탭에 빈자리가 있으면 꽂음
		for(int j=0; j<n; j++) {
			if(tab[j] == 0) {
				tab[j] = item[i];
				empty = 0;
				break;
			}
		}
		if(!empty) continue;
		// cout << "tab\n";
		// for(int i=0; i<n; i++) {
		// 	cout << tab[i] << ' ';
		// }
		// cout << '\n';
		// 자리없음 && 새로운 물건
		// 사용일정을 체크해서 가장 늦게 사용하는 물건을 뽑음
		int swap_pos = 0;
		int chk = -1;
		for(int j=0; j<n; j++) {
			int tmp_pos = 0;
			for(int l=i+1; l<k; l++) {
				if(tab[j] == item[l]) break;
				tmp_pos++;
			}
			if(tmp_pos>chk) {
				swap_pos = j;
				chk = tmp_pos;
			}
		}
		tab[swap_pos] = item[i];
		// for(int i=0; i<n; i++) {
		// 	cout << tab[i] << ' ';
		// }
		cnt++;
	}
	cout << cnt;
}
