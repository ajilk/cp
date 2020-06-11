/* Chef-jumping
 *
 * https://www.codechef.com/problems/OJUMPS
 *
 */

#define fr(i, n) for (int i = 0; i < (n); ++i)

#include <iostream>
using namespace std;

int main() {
  long long a;
  cin >> a;
  if (a % 6 == 0 || a % 6 == 1 || a % 6 == 3) cout << "yes";
  else
    cout << "no";
  return 0;
}
