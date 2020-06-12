/* Tourist Translations
 *
 * https://www.codechef.com/problems/TOTR
 *
 */

#define fr(i, n) for (int i = 0; i < (n); ++i)

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<int, int> map;
  fr(i, 128) map[i] = i;
  map['_'] = 32;

  int t;
  string key, msg;
  cin >> t >> key;
  fr(i, key.size()) {
    map[i + 97] = key[i];
    map[i + 65] = key[i] - 32;
  }
  while (t--) {
    cin >> msg;
    fr(i, msg.size()) cout << (char)map[msg[i]];
    cout << endl;
  }
  return 0;
}
