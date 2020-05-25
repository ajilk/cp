/* Chef and Notebooks
 *
 * https://www.codechef.com/problems/CNOTE
 *
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t, x, y, k, n, c, p;
  scanf("%d", &t);
  while (t--) {
    bool lucky = false;
    scanf("%d%d%d%d", &x, &y, &k, &n);
    for (int i = 0; i < n; i++) {
      scanf("%d", &p);
      scanf("%d", &c);
      if (c <= k && p >= x - y) {
        lucky = true;
        break;
      }
    }
    printf("%s\n", lucky ? "LuckyChef" : "UnluckyChef");
  }
  return 0;
}
