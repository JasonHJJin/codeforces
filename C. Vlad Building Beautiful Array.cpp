//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//
//using namespace std;
//
//void solve() {
//    int n; cin >> n;
//    int me = 1e9, mo = 1e9;
//    for(int i = 0; i < n; ++i){
//        int k; cin >> k;
//        if (k %2){
//            mo = min(mo, k);
//        }
//        else{
//            me = min(me, k);
//        }
//    }
//    if (mo < me || me == 1e9 || mo == 1e9){
//        cout << "YES" << endl;
//    }
//    else{
//        cout << "NO" << endl;
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//    int t;
//    cin >> t;
//    while (t--) {
//        solve();
//    }
//}
