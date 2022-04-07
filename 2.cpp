#include <iostream>
#include <cmath>

using namespace std;

int Syr(){
    double arr[100], numb, x;
    double sum = 0;
    cin >> numb;
    
    for(int i = 0; i < numb; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < numb; i++){
        sum = sum + arr[i];
    }
    x = sum / numb;
    cout << x;
    return 0;
}
int main(){
    Syr();
}