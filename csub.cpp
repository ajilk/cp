/* Count Substrings
 *
 * https://www.codechef.com/problems/CSUB
 *
 * Carl Friedrich Gauss's Formula
 * 1 + 2 + 3 + ... + n = ( n(n+1) ) / 2
 *
 */
#include <iostream>
#include <string>
using namespace std;

typedef long long LL;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    int n, cnt = 0;
    LL overall = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        cnt++;
        overall += (LL)(cnt);
      }
    }
    cout << overall << endl;
  }
  return 0;
}
