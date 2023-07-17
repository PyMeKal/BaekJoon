#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, num, sum = 1;
    cin >> a;
    num = a;
    for (int i = 1; i < num; i++){
        a -= 6 * i;
        if (a <= 1){
            sum += i;
            break;
        }
    }
    cout << sum;
}