/* Little Elephant and Permutations
 *
 * https://www.codechef.com/problems/LEPERMUT
 *
 */

#include <iostream>
using namespace std;

int main() {
  int t, n;
  int arr[100];
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int I = 0, LI = 0;
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) LI++;
      for (int j = i + 1; j < n; j++) {
        if (arr[i] > arr[j]) I++;
      }
    }
    printf("%s\n", LI == I ? "YES" : "NO");
  }
  return 0;
}
