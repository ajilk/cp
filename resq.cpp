/* Arranging Cup-cakes
 *
 * https://www.codechef.com/problems/RESQ
 *
 */

#define fr(i, n) for (int i = 0; i < (n); ++i)

#include <climits>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int t, n, diff;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    diff = n - 1;
    for (int i = sqrt(n); i > 1; i--) {
      if (n % i == 0) {
        diff = n / i - i;
        break;
      }
    }
    printf("%d\n", diff);
  }
  return 0;
}
