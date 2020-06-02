/* The Minimum Number of Moves
 *
 * https://www.codechef.com/problems/SALARY
 *
 */

#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

int main() {
  int t, n, arr[100];
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int sum = accumulate(arr, arr + n, 0);
    int min = *min_element(arr, arr + n);
    printf("%d\n", sum - n * min);
  }
  return 0;
}
