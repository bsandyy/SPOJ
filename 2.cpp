/*
   The input begins with the number t of test cases in a single line (t<=10). In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

   prima facie, we need to calculate

   is to generate all the prime numbers that could be factors of numbers up to the maximum endpoint 1 billion. That square root happens to be around 32000. Using this array, do a bounded Sieve of Eratosthenes only in the range requested.

 */




#include <iostream>
#include <vector>

using namespace std;

vector<int> primes(32001,1);
// A global array which holds the list of primes from 1 to 32000 (1 for prime, 0 for composite)

//simplesieve function which takes the address of the primes array.
void simplesieve(vector<int>& primes)
{
        primes[0]=0;
        primes[1]=0;
        for(long long int i=2; i<=32000; i++)
        {
                long long int j = i;
                long long int temp = j*i;
                while(temp <= 32000)
                {
                        primes[temp] = 0;
                        j++;
                        temp = j*i;
                }
        }
}

void segmented_sieve(long long int m,long long int n){
        //create array of size n-m+1. and set the values to 1.
        //A sieve or a boolean array that stores the list of primes from m to n (1 for prime, 0 for composite)
        vector<int> sieve(n-m+1,1);
        int i,j;
        long long int temp;
        for(i=2; i <= 32000; i++) {
                if (primes[i] == 1) {
                        if (m%i == 0) {
                                j = m/i;
                        }
                        else{
                                j = m/i + 1;
                        }

                        /* Very Critical Case: If j comes out to be 1, or less than i*/
                        if( j < i)
                        {
                                j = i;
                        }

                        temp = i *j;
                        while (temp<=n) {
                                sieve[temp-m] = 0;
                                j = j + 1;
                                temp = i * j;
                        }
                }
        }
        if(m == 1)
        {
                sieve[0] = 0; // 1 is always composte
        }

        for(i=0; i<n-m+1; i++) {
                if(sieve[i]==1) {
                        cout << m+i << endl;
                }

        }
}

int main() {
        // your code goes here
        int t;
        unsigned long long m,n;
        simplesieve(primes);
        cin >> t;
        while(t--) {
                cin >> m >> n;
                segmented_sieve(m,n);
        }
        return 0;
}
