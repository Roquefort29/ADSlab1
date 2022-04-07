#include <iostream>
using namespace std;

int SyrBinomial(int n, int k) { //C(n, k)
    
    if (k > n){
        return 0;
    }
    if (k == 0 || k == n){
        return 1;
    }
    return SyrBinomial(n - 1, k - 1) + SyrBinomial(n - 1, k);
}
int main(){
    int n, k;
    cin >> n >> k;
    cout << SyrBinomial(n, k);
    return 0;
}