#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b, c;
    int num[10] = {0};
    cin >> a >> b >> c;
    int multi = a * b * c;

    while (multi > 10){
        num[multi % 10] += 1;
        multi = multi / 10;
    }
    num[multi % 10] += 1;

    for (int i = 0; i < 10; i++){
        cout << num[i] << '\n';
    }

    return 0;
}
