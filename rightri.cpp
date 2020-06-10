/* Chef and The Right Triangles
 *
 * https://www.codechef.com/problems/RIGHTRI
 *
 */

#define fr(i, n) for (int i = 0; i < (n); ++i)

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n, cnt = 0;
  int arr[6];
  scanf("%d", &n);
  while (n--) {
    fr(i, 6) scanf("%d", &arr[i]);
    long int a = pow(arr[2] - arr[0], 2) + pow(arr[3] - arr[1], 2);
    long int b = pow(arr[4] - arr[0], 2) + pow(arr[5] - arr[1], 2);
    long int c = pow(arr[4] - arr[2], 2) + pow(arr[5] - arr[3], 2);
    long int sides[3] = {a, b, c};
    sort(sides, sides + 3);
    if (sides[0] + sides[1] == sides[2]) cnt++;
  }
  printf("%d", cnt);
  return 0;
}
