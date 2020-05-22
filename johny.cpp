/* Uncle Johny
 *
 * https://www.codechef.com/problems/JOHNY
 *
 * Count the numbers that are lower than arr[x]
 *
 */

#include <iostream>
using namespace std;

int main() {
  int arr[100];
  int cnt, n, x;
  scanf("%d", &cnt);
  while (cnt--) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &x);
    x--;
    int k = 0;
    for (int i = 0; i < n; i++)
      if (arr[i] <= arr[x]) k++;
    cout << k << endl;
  }
  return 0;
}
