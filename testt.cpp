#include <iostream>
#include <climits>
using namespace std;




int count(int n){
        int result = 1;
        for(;; ) {
                if (n < 10) return result;
                if (n < 100) return result+1;
                if (n < 1000) return result+2;
                if (n < 10000) return result+3;
                // Skip ahead by 4 orders of magnitude
                n/=10000;
                result+=4;
        }

}






int main() {
        unsigned int n;
        //cout << UINT_MAX;
        cin >> n;
        cout << count(n) << endl;
        return 0;
}
