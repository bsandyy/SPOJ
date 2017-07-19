/*
ONP - Transform the Expression : Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation).

Ex:
  Input : ((a+t)*((b+(a+c))^(c+d)))
  Output : at+bac++cd+^*
pushing operators into stacka and poping them when we see ')' character.

ctype.h is for using isalpha() function.

*/

#include <iostream>
#include<string>
#include <ctype.h>
#include <stack>

using namespace std;

void converter(string exp){
  stack<char> temp;
  int len = exp.length();
  for (int i = 0; i < len; i++) {
    if(isalpha(exp[i])){
      cout << exp[i];
    }
    else if (exp[i] == ')'){
      cout << temp.top();
      temp.pop();
    }
    else if (exp[i] != '(') {
      temp.push(exp[i]);
    }
 }
 cout << "\n";
}


int main(){
  int t;
  string exp;
  cin >> t;
  while(t--){
    cin >> exp;
    converter(exp);
  }
}
