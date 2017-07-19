/*
   ACPC10A - What’s Next

   Given three successive members of a sequence, you need to determine the type of the progression(AP or GP) and the next successive member

   Input:
   4 7 10
   2 6 18
   0 0 0

   Output:
   AP 13
   GP 54

 */

#include <iostream>

using namespace std;

int next(int a, int b, int c){
        if (b-a == c-b) {
                cout << "AP " << c+(c-b) << endl;
        } else {
                cout << "GP " << c*(b/a) << endl;
        }
        return 0;
}


int main(){
        int a, b, c;
        while(true) {
                cin >> a >> b >> c;
                if (a==0 && b==0) {
                        cout << "\n";
                        return 0;

                } else {
                        next(a,b,c);

                }
        }
}
