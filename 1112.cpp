/*
   NSTEPS - Number Steps


   using maths formula :   y-y1 = ((y2-y1)/(x2-x1)) * (x-x1)   we can ge the line equations for both the parallel lines given in the problem.

   so any point given should solve either of thos equations to have a proper value. if not, output = No Number.

   so equations are x=y and x-y=2

   Below solution is O(n).

   But we can do it in O(1) using:

   if(x==y)
       {
           if(x%2==0)
               r=2*x;
           else
               r=2*x-1;
           cout<<r<<endl;
       }
       else if(x==y+2)
       {
           if(x%2==0)
               r=x+y;
           else
               r=x+y-1;
           cout<<r<<endl;
 */

#include <iostream>
#include <string>
#include <ctype.h>
#include <stack>

using namespace std;

int value(int x, int y){

        // values fitting the equations

        if(x == y) {
                //array of size x+1 to handle (0,0) coordinate as well
                int val[x+1];
                // Initialising zero coordinate
                val[0]=0;
                for(int i=1; i<=x; i++) {
                        if(i%2 == 0) {
                                val[i] = val[i-1] + 3;
                        }
                        else{
                                val[i] = val[i-1] + 1;
                        }
                }
                cout << val[x] << endl;
        }
        else if(x == y+2) {
                //array of size y+1 to handle (2,0) coordinate as well
                int val[y+1];
                // Initialising zero coordinate
                val[0]=2;
                for(int i=1; i<=y; i++) {
                        if(i%2 == 0) {
                                val[i] = val[i-1] + 3;
                        }
                        else{
                                val[i] = val[i-1] + 1;
                        }
                }
                cout << val[y] << endl;
        }
        //values not fitting the equation
        else {
                cout << "No Number" << endl;
        }
        return 0;
}


int main(){
        int t,x,y;
        string exp;
        cin >> t;
        while(t--) {
                cin >> x >> y;
                value(x,y);
        }
}
