#include <iostream>
using namespace std;

unsigned rev(unsigned);

int main() {
        // your code goes here
        unsigned n,a,b;
        cin >> n;
        for(int i=0; i<n; i++) {
                cin >> a >> b;
                cout << rev(rev(a) + rev(b)) << "\n";
        }
        return 0;
}

unsigned rev(unsigned num){
        unsigned reversed = 0;
        while(num) {
                reversed = reversed*10 + num%10;
                num = num/10;
        }

        return reversed;
}
