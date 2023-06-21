//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//
//int main(){
//    const int mxN = 2e5;
//    int n, m, k, a[mxN], b[mxN];
//    cin >> n >> m >> k;
//    for(int i = 0; i< n; ++i){
//        cin >> a[i];
//    }
//    for(int i= 0; i< m; ++i){
//        cin >> b[i];
//    }
//    sort(a, a+n);
//    sort(b, b+m);
//    int ans = 0;
//    for(int i=0, j=0; i <n; ++i){
//        while(j<m&&b[j]<a[i]-k){ //j = 1
//            ++j;
//        }
//        if(j<m&&b[j]<=a[i]+k){
//            ++ans; ++j;
//        }
//    }
//    cout << ans;
//}