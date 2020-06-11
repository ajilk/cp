/* Splitting Candies
 *
 * https://www.codechef.com/problems/SPCANDY
 *
 */

#define fr(i, n) for (int i = 0; i < (n); ++i)

#include <iostream>
using namespace std;

int main() {
  int t;
  long long n, k;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    if (k == 0) cout << 0 << " " << n << endl;
    else
      cout << n / k << " " << n % k << endl;
  }
  return 0;
}
