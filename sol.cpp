#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);
 	int tt;
 	cin >> tt;
 	while (tt--) {
 		int n, h, y1, y2, l;
 		cin >> n >> h >> y1 >> y2 >> l;
 		vector<int> t(n), x(n);
 		for (int i = 0; i < n; i++) {
 			cin >> t[i] >> x[i];
 		}
 		// check the image in this repository for better understanding
 		int cnt = 0;
 		for (int i = 0; i < n; i++) {
 			if (t[i] == 1) {
 				// these are the conditions for the type-1 barrier
 				if (h - y1 <= x[i] && l > 0) {
 					// check if Edward can duck from the barrier
 					// and if his alchemic life force is still greater than 0
 					cnt++;
 				} else if (l > 0) {
 					// otherwise, use an alchemic life force to destroy the barrier
 					cnt++;
 					l--;
 				}
 			} else {
 				// these are the conditions for the type-2 barrier
 				if (y2 >= x[i] && l > 0) {
 					// check if the the jumping height of Edward is greater than the barrier
 					// and if his alchemic life force is still greater than 0
 					cnt++;
 				} else if (l > 0) {
          // otherwise, use an alchemic life force to destroy the barrier
 					cnt++;
 					l--;
 				}	
 			}
 			// increment counter for every barrier destroyed
 		}
 		// lastly, check if this final alchemic life force is greater than 0
 		// if it's equal to 0, then decrement the counter since it's not counted as passed
 		cout << (l > 0 ? cnt : cnt - 1) << '\n';
 	} 
  return 0;
}      
