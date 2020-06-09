/* Discrepancies in the Voters List
 *
 * https://www.codechef.com/problems/VOTERS
 *
 */

#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int, int> arr;
  int t, n = 0, n1, n2, n3, x;
  scanf("%d%d%d", &n1, &n2, &n3);
  t = n1 + n2 + n3;

  while (t--) {
    scanf("%d", &x);
    arr[x]++;
    if (arr[x] == 2) n++;
  }

  printf("%d\n", n);

  for (auto const& x : arr)
    if (x.second > 1) printf("%d\n", x.first);

  return 0;
}
