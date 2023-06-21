////
//// Created by Jason Jin on 6/18/23.
////
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//
//using namespace std;
//
//void solve() {
//    int n; cin >> n;
//    string s, out; cin >> s;
//    char ch = s[0];
//    for(int i = 1; i < n; ++i){
//        if (ch == s[i]){
//            out += s[i];
//            ch = s[i+1];
//            i++;
//        }
//        else{
//            continue;
//        }
//    }
//    cout << out << endl;
//}
//
//int main() {
//    ios::sync_with_stdio(false), cin.tie(0);
//    cout.tie(0);
//    int t;
//    cin >> t;
//    while (t--) {
//        solve();
//    }
//}