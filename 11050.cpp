#include <iostream>
using namespace std;

int factorial(int a){
    if (a == 0) return 1;
    return a * factorial(a-1);
}

int main(){
    int n, k, result;
    cin >> n >> k;

    result = factorial(n) / (factorial(n-k) * factorial(k));

    cout << result;

    return 0;
}

