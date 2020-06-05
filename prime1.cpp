/* Prime Generator
 *
 * https://www.codechef.com/problems/PRIME1
 *
 */

#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;

  if (n % 2 == 0 || n % 3 == 0) return false;

  for (int i = 5; i * i <= n; i = i + 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  }

  return true;
}

int main() {
  int t, m, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; i++) {
      if (isPrime(i)) printf("%d\n", i);
    }
    printf("\n");
  }
  return 0;
}
