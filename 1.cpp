#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	for(;;){
	 cin >> a;
	 if(a==42){
		return 0;
	 }
	 else{
		cout << a << "\n" ;
	 }
    }


	return 0;
}

//Simple Implementation
/**
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
  for(; scanf("%d",&x) > 0 && x != 42; printf("%d\n", x));
	return 0;
}
**/
