/* Maximum Weight Difference
 *
 * https://www.codechef.com/problems/MAXDIFF
 *
 */

#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

int main() {
  int t, n, k, arr[100];
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    sort(arr, arr + n);
    int s = accumulate(arr, arr + n, 0);
    int s1 = accumulate(arr, arr + k, 0);
    int s2 = accumulate(arr + n - k, arr + n, 0);
    printf("%d\n", max(abs(s1 - (s - s1)), abs(s2 - (s - s2))));
  }
  return 0;
}
