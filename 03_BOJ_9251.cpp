#include <bits/stdc++.h>
using namespace std;
const int MX = 1005;
int d[MX][MX];
stack<char> S;
int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(0);
    string str1, str2;
    cin >> str1;
    cin >> str2;
    str1 = '0'+str1;
    str2 = '0'+str2;
    
    // d[i][j] = d[i-1][j-1] + 1 => 마지막 문자가 같을 때
    // d[i][j] = max(d[i-1][j] , d[i][j-1]); => 마지막 문자가 다를 때
    for(int i=1; i<str1.size(); i++) {
        for(int j=1; j<str2.size(); j++) {
            if(str1[i] == str2[j]) d[i][j] = d[i-1][j-1]+1;
            else d[i][j] = max(d[i-1][j], d[i][j-1]);
        }
    }
    // LCS 문자열 출력
    // int x = str1.size() - 1;
    // int y = str2.size() - 1;
    // while(x>0&&y>0) {
    //     if(str1[x] == str2[y]) {
    //         S.push(str1[x]);
    //         x -= 1;
    //         y -= 1;
    //         continue;
    //     }
    //     if(d[x-1][y] > d[x][y-1]) x -= 1;
    //     else if(d[x-1][y] < d[x][y-1]) y -= 1;
    //     else x -= 1;
    // }
    cout << '\n';
    cout << d[str1.size()-1][str2.size()-1];
    // if(!S.size()) return 0;
    // while(!S.empty()) {
    //     cout << S.top(); S.pop();
    // }
}
