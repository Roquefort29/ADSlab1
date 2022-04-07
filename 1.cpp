EXERCISE 1

#include <iostream>

using namespace std;

void Syr(){
    int arr[100], numb;
    cin >> numb;
    
    for(int i = 0; i < numb; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < numb; i++){
        if(arr[0] > arr[i])
        arr[0] = arr[i];
        
    }
    cout << arr[0];
}
int main(){
    Syr();
}
