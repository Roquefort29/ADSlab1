#include <iostream>
#include <cmath>

using namespace std;

int Syr(){
    int numb;
    int x = 0;
    int index = 0;
    
    cin >> numb;
    x = numb/2;
    
        for(int i = 2; i <= x; i++){
            if(numb % i == 0) {
                cout << "Composite";
                index = 1;
                break;
            }
        }
        if(index == 0)
        {
            cout << "Prime";    
        }
        return 0;
    }
int main(){
    Syr();
}