/* Chopsticks
 *
 * https://www.codechef.com/problems/TACHSTCK
 *
 */

#define fr(i, n) for (int i = 0; i < (n); ++i)

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, d, x, pairs = 0;
  scanf("%d%d", &n, &d);
  vector<int> L;
  fr(i, n) {
    scanf("%d", &x);
    L.push_back(x);
  }
  sort(L.begin(), L.end());
  fr(i, n - 1) {
    if (L[i + 1] - L[i] <= d) {
      i++;
      pairs++;
    }
  }
  printf("%d", pairs);
  return 0;
}
