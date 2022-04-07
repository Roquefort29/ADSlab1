#include <iostream>
using namespace std;

int SyyrRecurs(int a) {
    if (a <= 1)
        return a;
    return a * SyyrRecurs(a - 1);
}
 
int main() {
    int syr;
    cin >> syr;
    cout << SyyrRecurs(syr);
    return 0;
}