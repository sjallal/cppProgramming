
#include<bits/stdc++.h>
using namespace std;
int main(){
		int n; cin>>n;
		int x = 1, y = (n*n)+1;
		int y1 = y;
		vector<int> res;
		for(int i = n; i > 0; i--){
			if(i != n){
				y = y - i;
				y1 = y;
			}
			for(int a = 0; a < ((n-i)*2); a++){
				cout<<"*";
			}
			for(int j = 0; j < i; j++){
				res.push_back(x);
				res.push_back(0);
				x++;
			}
			for(int j = 0; j < i; j++){
				res.push_back(y);
				res.push_back(0);
				y++;
			}
			res.pop_back();
			for(auto d:res){
				cout<<d;
			}
			cout<<endl;
			res.clear();
			y = y1;
		}
}
/*

 * for n:4
 * 
 * 1020304017018019020
 * **50607014015016
 * ****809012013
 * ******10011
 * 
 * FOR n = 4;
 * For line 1: [Number of digits will be 4]
 * for getting 17: (n*n)+1
 * 1 2 3 4 17 18 19 20
 * Padding 0: except the last time.
 * 1020304017018019020
 * Keep track of:
 * FRONT_END: 4
 * LAST_END: 17
 * 
 * 
 * For line 2: [Number of digits will be 3]
 * for getting 14: LAST_END - NO_OF_DIGITS
 * **5 6 7 14 15 16
 * **50607014015016
 * Keep track of:
 * FRONT_END: 7
 * LAST_END: 14
 * 
 * For line 3: [Number of digits will be 2]
 * for getting 12: LAST_END - NO_OF_DIGITS
 * ****8 9 12 13
 * ****809012013
 * Keep track of:
 * FRONT_END: 8
 * LAST_END: 12
 * 
 * For line 4: [Number of digits will be 1]
 * for getting 11: LAST_END - NO_OF_DIGITS
 * ******10 11
 * ******10011
 * FRONT_END: 10
 * LAST_END: 11
 * 
 * 
 * ============================================================================
 * saqib@saqibpc:~/Programming/cppProgramming/CodeVitaFSPTraining$ ./PatternPrint 
4
1020304017018019020
**50607014015016
****809012013
******10011
saqib@saqibpc:~/Programming/cppProgramming/CodeVitaFSPTraining$ ./PatternPrint 
3
10203010011012
**4050809
****607
saqib@saqibpc:~/Programming/cppProgramming/CodeVitaFSPTraining$ ./PatternPrint 
2
1020506
**304
saqib@saqibpc:~/Programming/cppProgramming/CodeVitaFSPTraining$ ./PatternPrint 
5
102030405026027028029030
**6070809022023024025
****10011012019020021
******13014017018
********15016
 * ============================================================================
 * 
*/

