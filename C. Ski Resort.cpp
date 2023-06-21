////
//// Created by Jason Jin on 6/19/23.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//
//using namespace std;
//
//#define ll long long
//
//void solve() {
//    ll n,k, q;
//    cin>>n>>k>>q;
//    ll out=0;
//    ll cnt=0;
//    for(int i=0; i<n; i++){
//        ll x;
//        cin>>x;
//        if(x<=q) cnt++;
//        else cnt=0;
//        if(cnt>=k) out+=cnt-k+1;
//    }
//    cout<<out<<"\n";
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
