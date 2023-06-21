//#include <iostream>
//using namespace std;
//#define ll long long
//
//int main(){
//    int n; cin >> n;
//    while(n--){
//        ll a, b;
//        cin >> a >> b; // 2 1 -> 4
//        ll z = max(a, b); //2
//        ll z2 = (z-1) * (z-1), out;
//        if(z%2){
//            if(a == z){
//                out = z2 + b;
//            }else{
//                out = z2 + 2*z - a;
//            }
//        }else{
//            if(b == z){
//                out = z2 + a;
//            }else{
//                out = z2 + 2*z - b;
//            }
//        }
//        cout << out << endl;
//    }
//}