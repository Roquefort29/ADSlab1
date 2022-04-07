#include <iostream>
#include <cmath>

using namespace std;

int SyrPow(int a, unsigned int b){ 
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
        return SyrPow(a, b / 2) * SyrPow(a, b / 2);
    else
        return a * SyrPow(a, b / 2) * SyrPow(a, b / 2);
}
int main(){
    int a; 
    unsigned int b;
    cin >> a >> b;
    cout << SyrPow(a, b);
    return 0;
}