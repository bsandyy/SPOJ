/*
  SAMER08F - Feynman


   No of unique squares in a given NxN square.

   The solution would be sum of first n squares = n(n+1)(2n+1)/6

 */

#include <iostream>

using namespace std;

int squares(int n){
  int val= n * (n+1) * (2*n + 1)/6;
  cout << val << endl;
  return 0;
}


int main(){
        int n;
        while(true) {
                cin >> n;
                if (n) {
                  squares(n);
                } else {
                return 0;
                }
        }
}
