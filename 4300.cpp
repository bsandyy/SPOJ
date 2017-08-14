/*
  AE00 - Rectangles


   No of unique rectangles that can be formed from N squares.
   we need to solve it from rows-colums perspective.

 */

#include <iostream>

using namespace std;

int main(){
        int n,sum;
        cin >> n;
        //to handle single row rectangles
        sum = n;
        //to handle multii row rectangles
        for(int i=2;i<n;i++){
          if(i*2>n){
            break;
          }
          else{
            for(int j=i; i*j <=n;j++){
              sum++;
            }
          }
          // cout << i << "\t" << sum << endl;
        }
        cout << sum;
}
