/* Small factorial

   At the first glance, the problem looks so esasy, but the devil lies in the details.

   When we calculate 100! , it will contains roughly 150+ digits. our 64-bit or 32-bit unsigned integers can only hold numbers which have aroud 9-19 decimal digits.

   Quick Tip :  to handle scenarios like this JAVA has BIGINTEGER type.
             Also, python guys don't even have to bother about these ranges. :)

   Now, Inorder to solve this problem, we have to implement a solution/ container which can hold large numbers with 3-digit decimal digits.

   Complete explanation can be found here : https://blog.codechef.com/2009/07/02/tutorial-for-small-factorials/

 */

 #include <iostream>
using namespace std;

int factorial(int n) {
        if(n==0) {
                cout << 1 << endl;
        }
        else {
                int val[200];
                val[0] = 1;
                int m=1, x, temp=0, i, j;
                for(i=1; i<=n; i++) {
                        for(j=0; j<m; j++) {
                                x = (val[j] * i) + temp;
                                val[j] = x%10;
                                temp = x/10;
                        }
                        // Final temp is added to val only after all the existing digits in val complete their // product with given number i.e "i".
                        while(temp) {
                                val[m] = temp%10;
                                m++;
                                temp = temp/10;
                        }
                }
                while(m) {
                        cout << val[m-1];
                        m--;
                }
                cout << "\n";

        }

        return 0;
}


int main() {
        // your code goes here
        int t,n;
        cin >> t;
        while(t--) {
                cin >> n;
                factorial(n);
        }
        return 0;
}
