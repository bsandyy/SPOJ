#include <iostream>
using namespace std;
long long factorial(int m){
   if(m==0){
     return 1;
   }
   else{
     return m * factorial(m-1);
   }
}
int main() {
        int t,n;
        cin >> t;
        while(t--) {
                cin >> n;
                cout << factorial(n) << endl;}return 0;}
