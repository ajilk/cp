/* Carvans
 *
 * https://www.codechef.com/problems/CARVANS
 *
 * Given are the maximum possible speed of the cars.
 * A car is limited by the maximum speed of the car in front of them
 *
 * 4 5 1 2 3
 *
 * - 1st car has a maximum capable speed of 4 and therefore traveling at that
 *   maximum speed
 * - 2nd car has a maximum capable speef of 5 but is limited by the car in
 *   front of it who can only go at a speed of 4. There for 2nd car is not
 *   traveling at its maximum speed of 5 but traveling at a speed of 4
 * - 3rd car has a maximum capable speed of 1 and is traveling at that maximum
 *   speed since it's not limited by the car in front of it who is traveling at
 *   a higher speed of 4.
 * - 4th car has a maximum speed of 2 but is limited by the car in front of it
 *   who is traveling at a speed of 1. Therefore, 4th car is not traveling at
 *   its maximum speed
 * - 5th car has a maximum speed of 3 byt is limited by the car in front of it
 *   who is traveling at a speed of 1. Therefore, 5th car is not traveling at
 *   its maximum speed
 *
 * |   |
 * 4 4 1 1 1
 *
 *
 * Above is the speed that the cars are traveling in. So 2 cars are traveling
 * at their max speeds.
 *
 */

#include <climits>
#include <iostream>
using namespace std;

int main() {
  int arr[10000];
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    int cnt = 0;
    int maxSpeed = INT_MAX;
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
      if (arr[i] <= maxSpeed) cnt++;
      maxSpeed = min(arr[i], maxSpeed);
    }
    printf("%d\n", cnt);
  }
  return 0;
}
