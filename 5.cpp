#include <iostream>
#include <cmath>

using namespace std;

int SyrFib(int syrnumb){ //RECURSION OF NUMBERS OF FIBONACCI
   int x = 0;
   int y = 1;
   int sum;
    if(syrnumb == 0)
        return x;
        
    for(int i = 2; i <= syrnumb; i++) {
       sum = x + y;
       x = y;
       y = sum;
    }
    return y;
}
int main(){
    int syrnumb;
    cin >> syrnumb;
    cout << SyrFib(syrnumb);
    return 0;
}