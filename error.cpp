/* Chef and Feedback
 *
 * https://www.codechef.com/problems/ERROR
 *
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  string s;
  scanf("%d\n", &t);
  while (t--) {
    int good = 0;
    getline(cin, s);
    for (int i = 0; i + 2 < s.size(); i++) {
      string x = string() + s[i] + s[i + 1] + s[i + 2];
      if (x == "010" || x == "101") good = 1;
    }
    printf("%s\n", good ? "Good" : "Bad");
  }
  return 0;
}
