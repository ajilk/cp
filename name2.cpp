/* Your Name is Mine
 *
 * https://www.codechef.com/problems/NAME2
 *
 */

#define fr(i, n) for (int i = 0; i < (n); ++i)

#include <iostream>
using namespace std;

bool contains(string a, string b) {
  int i = 0, j = 0;
  while (i < a.size() && j < b.size()) {
    if (a[i] == b[j]) i++;
    j++;
  }
  return i == a.size();
}

int main() {
  int t, i, j;
  string m, w;
  scanf("%d", &t);
  while (t--) {
    cin >> m >> w;
    puts(contains(m, w) || contains(w, m) ? "YES" : "NO");
  }
  return 0;
}
