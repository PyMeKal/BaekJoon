#include <iostream>
using namespace std;

int main(){
    bool end = false;
    while (not end){
        int a,b;
        cin >> a >> b;
        if (a == 0 && b == 0){
            end = true;
        }
        else
            cout << a + b << '\n';
    }
    return 0;
}
