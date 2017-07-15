#include <iostream>
#include<math.h>
using namespace std;

int fib_zeros(long long m){
   int temp, zeroes =0, power =1;
   while (true) {
     temp = m / pow(5,power);
     if (temp == 0) {
       break;
     }
     else{
       zeroes = zeroes + temp;
       power++;
     }
   }
   cout << zeroes << endl;
   return 0;
}

int main() {
        // your code goes here
        int t;
        long long int n;
        cin >> t;
        while(t--) {
                cin >> n;
                fib_zeros(n);
        }
        return 0;
}
/*

Logic used.

http://www.purplemath.com/modules/factzero.htm

*/
