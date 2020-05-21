/* Factorial 
 *
 * https://www.codechef.com/problems/FCTRL
 * https://discuss.codechef.com/t/fctrl-editorial/8651
 * 
 * Number of factors of 5 = Number of trailing zeroes
 * 
 * 25! = 15511210043330985984000000
 * 
 * 25 / 5	= 5 [factors of 5   ]
 * 25 / 5^2	= 1 [factors of 5^2 ]
 *    		= 6 [trailing zeroes]
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int i=0, factor=5, x, cnt, zeroes;
	cin >> cnt;
	for(i=0; i<cnt; i++){
		cin >> x;
		zeroes = 0, factor = 5;
		while((x/factor)){
			zeroes += x/factor;
			factor *= 5;
		}
		cout << zeroes << endl;
	}
	return 0;
}
