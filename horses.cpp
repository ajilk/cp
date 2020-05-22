/* Horses
 *
 * https://www.codechef.com/problems/HORSES
 *
 * Sort -> MIN = min(a[i+1], a[i]);
 *
 */

#include <algorithm>
#include <climts>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int S[5000];
  int n, cnt;
  scanf("%d", &cnt);

  while (cnt--) {
    int MIN = INT_MAX;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &S[i]);
    sort(S, S + n);
    for (int i = 0; i < n - 1; i++) MIN = min(S[i + 1] - S[i], MIN);
    printf("%d\n", MIN);
  }
  return 0;
}
