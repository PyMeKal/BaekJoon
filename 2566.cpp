#include <iostream>
using namespace std;

int main(){
    int a, b, max = -1;

    for (int i = 1; i < 10; i++){
        for (int j = 1; j < 10; j++){
            int temp;
            cin >> temp;
            if (temp > max){
                max = temp;
                a = i;
                b = j;
            }
        }
    }
    cout << max << '\n' << a << ' ' << b;
}