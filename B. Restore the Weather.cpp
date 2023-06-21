//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//using namespace std;
//
//void solve(){
//    int n, k; cin >> n >> k;
//    vector<int> a(n), b(n);
//    for(int i=0; i<n; ++i){
//        cin >> a[i];
//    }
//    for(int i=0; i<n; ++i){
//        cin >> b[i];
//    }
//    vector<int> p(n);
//    iota(p.begin(), p.end(), 0);
//    sort(p.begin(), p.end(), [&](int i, int j){
//        return a[i] < a[j];
//    });
//    sort(b.begin(), b.end());
//    vector<int> output(n);
//    for(int i = 0; i<n; ++i){
//        output[p[i]] = b[i];
//    }
//    for(int i= 0; i< n; ++i) cout << output[i] << " \n"[i == n - 1];
//}
//
//int main () {
//    ios::sync_with_stdio(false), cin.tie(0);
//    int t;
//    cin >> t;
//    while (t--) {
//        solve();
//    }
//}