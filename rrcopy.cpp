/* Copy-Paste
 *
 * https://www.codechef.com/problems/RRCOPY
 *
 */

#define fr(i, n) for (int i = 0; i < (n); ++i)

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  int t, n, x;
  scanf("%d", &t);
  while (t--) {
    unordered_set<int> count;
    scanf("%d", &n);
    fr(i, n) {
      scanf("%d", &x);
      count.insert(x);
    }
    printf("%lu\n", count.size());
  }
  return 0;
}
