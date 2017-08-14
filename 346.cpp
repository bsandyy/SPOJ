/*
  COINS - Bytelandian gold coins

Basic DP problem.

Complete essense lies in formula : arr[n] = max(n, coins(n/2)+coins(n/3)+coins(n/4));


 */

#include <iostream>
#include<stdio.h>
#include <map>
#define LL long long

using namespace std;

map<LL,LL> arr;


LL coins(LL n){
  if(n==0){
    return 0;
  }
  // Since we are looking from arr[1] which is not zero
  if (!arr[n]) {
    arr[n] = max(n, coins(n/2)+coins(n/3)+coins(n/4));
  }
  return arr[n];
}


int main(){
        LL n;
        while(scanf("%lld", &n) != EOF) {
                cout << coins(n) << endl;
        }
        return 0;
}


// cout << "i:" << i << endl;
// cout << max(i, arr[i/2]+arr[i/3]+arr[i/4]) << endl;
