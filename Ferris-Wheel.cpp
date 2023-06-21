//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//
//int main(){
//    const int maX = 2e5;
//    int a, b, q[maX];
//    cin >> a >> b;
//    for(int i = 0; i < a; ++i){
//        cin >> q[maX];
//    }
//    sort(q, q+a);
//    int ans = 0;
//    for(int i = 0, j =a-1; i< j;){
//        while(i < j && q[i]+q[j]>b){
//            --j;
//        }
//        if(i>=j){
//            break;
//        }
//        ++ans;
//        ++i;
//        --j;
//    }
//    cout << a - ans;
//
//}
//
////[7,1,5,3,6,4]
////minPrice = INT_MAX, 7, 1
////maxProfit = 0,  4,