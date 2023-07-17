#include <iostream>
using namespace std;

int people(int k, int n){
    int sum = 0;
    for (int h = 0; h < n; h++){
        for (int j = 1; j < k + 1; j++){
            int a = 0;
            for (int i = 1; i <= j; i++){
                a += i;
            }
            sum += a;
        }
    }
    return sum;
}

int main(){
    int T;
    cin >> T;

    for (int i = 0; i < T; i++){
        int k, n;
        cin >> k >> n;
        cout << people(k, n) << '\n';
    }

    return 0;
}