/* Cleaning Up
 *
 * https://www.codechef.com/problems/CLEANUP
 *
 */

#include <iostream>
#include <set>
#include <vector>
using namespace std;

void print(vector<int> const& arr) {
  for (int i = 0; i < arr.size(); i++) printf("%d ", arr.at(i));
  printf("\n");
}

int main() {
  int arr[1000];
  int t, m, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) scanf("%d", &arr[i]);
    set<int> done(arr, arr + m);

    vector<int> chef, schef;
    int turn = 1;
    for (int i = 1; i <= n; i++) {
      if (!done.count(i)) {
        if (turn) chef.push_back(i);
        else
          schef.push_back(i);
        turn = !turn;
      }
    }
    print(chef);
    print(schef);
  }
  return 0;
}
