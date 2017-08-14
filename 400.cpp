/*
   TOANDFRO - To and Fro

   split the given string into x arrays/strings of lenght "col". then reverse each alternate array/string stating from 2nd string.
   then print all characters from each array/string based on their index.

   useful info :
       string has str.begin() and str.end() funtions.
       algorithm header has reverse funtion whicj can do inplace reversing.
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void sent(string s, int col){
        int sen_len = s.length();
        int rows = sen_len/col;
        // cout << s << col << sen_len << rows << endl;
        string arr[rows];
        int i=0;
        int row=0;
        while(i<sen_len ) {
                if (i%2 == 0) {
                        arr[row] = s.substr(i,col);
                        // cout << i << "\t" << arr[row] << endl;
                } else {
                        string temp = s.substr(i,col);
                        // Reverse str[beign..end]
                        reverse(temp.begin(),temp.end());
                        arr[row] = temp;
                        // cout << i << "\t" << arr[row] << endl;
                }
                i+=col;
                row++;
        }

        for (int i = 0; i < col; i++) {
                for(int j=0; j<rows; j++) {
                        cout << arr[j][i];
                }
        }
        cout << "\n";
}


int main(){
        int col;
        string cipher;
        while(true) {
                cin >> col;
                if (col) {
                        cin >> cipher;
                        sent(cipher,col);
                } else {
                        return 0;
                }
        }
}
