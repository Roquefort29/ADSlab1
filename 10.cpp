#include <iostream>

using namespace std;

int SyrGCD(int x, int y){ 
    if(x == 0 || y == 0 || x == y){ 
        return max(x, y); 
    }
    if(x > y){
        return SyrGCD(x - y, y);
    } 
    else {
            return SyrGCD(x, y - x);
    }
}
    int main(){
        int x, y;
        cin >> x >> y;
        cout << SyrGCD(x, y);
        return 0;
    }