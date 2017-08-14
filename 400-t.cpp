#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

        int COL;
        string str;
        scanf("%d",&COL);

        while(COL)
        {
                getline(cin,str);// this takes care of enter key
                getline(cin,str);
                int row=str.length()/COL;
                char mat[row][COL];
                int k=0;
                for(int i=0; i<row; ++i)
                {
                        if(i%2==0)
                        {
                                for(int j=0; j<COL; ++j)
                                        mat[i][j]=str[k++];
                        }
                        else
                        {
                                for(int j=COL-1; j>=0; --j)
                                        mat[i][j]=str[k++];
                        }
                }

                for(int j=0; j<COL; j++)
                {
                        for(int i=0; i<row; i++) {
                                cout << "i:"<< i << "j:" <<j;
                                printf("%c",mat[i][j]);
                        }
                }
                printf("\n");
                scanf("%d",&COL);
        }
        return 0;
}


int count(int n){
        int result = 1;
        if (n < 10) return 1;
        if (n < 100) return 2;
        if (n < 1000) return 3;
        if (n < 10000) return 4;
        for(;; ) {
                n/=10000;
                result+=4;
        }
        return result;

}
