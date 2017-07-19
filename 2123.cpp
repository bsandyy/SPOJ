/*
   CANDY - Candy I
 */

#include <iostream>

using namespace std;


int main(){
        int n;
        cin >> n;
        while(n != -1 ) {
                int arr[n];
                int sum=0,count=0,avg;

                for(int i=0; i<n; i++) {
                        cin >> arr[i];
                        sum += arr[i];
                }
                avg = sum/n;
                if (sum%n == 0) {
                  for(int i=0; i<n; i++) {
                          if(arr[i]<avg) {
                                  count += avg-arr[i];
                          }
                  }
                  cout << count << endl;
                  cin >> n;
                } else {
                  cout << "-1" << endl;
                  cin >> n;
                }

        }
        return 0;
}
