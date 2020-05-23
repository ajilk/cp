/* Coin Flip
 *
 * https://www.codechef.com/problems/CONFLIP
 *
 */

#include <iostream>
using namespace std;

int main() {
  int t, g, i, q;
  long int n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &g);
    while (g--) {
      scanf("%d%ld%d", &i, &n, &q);
      if (n % 2 == 0 || q == i) printf("%ld\n", n / 2);
      else
        printf("%ld\n", n / 2 + 1);
    }
  }
  return 0;
}
