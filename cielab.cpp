/* Ciel and A-B Problem
 *
 * https://www.codechef.com/problems/CIELAB
 *
 * Add 1 if last digit != 9 else subtract 1
 *
 */

#define RESET "\033[0m"
#define RED "\033[31m"
#define DEBUG(x) cout << RED << "\n==> " << RESET << #x << ": " << x << endl;

#include <iostream>
using namespace std;

int main() {
  int a, b, d;
  scanf("%d %d", &a, &b);
  d = a - b;
  cout << ((d % 10 != 9) ? ++d : --d);
  return 0;
}
