#include <iostream>
using namespace std;


int main(){
    
    int sum = 0;
    int num[10];

    for (int i = 0; i < 10; i++){
        int a;
        cin >> a;
        num[i] = a % 42;
    }
    for (int i = 0; i < 10; i++){
        bool same = false;
        if (num[i] != -1){
            for (int j = i+1; j < 10; j++){
                if (num[i] == num[j]){
                    num[j] = -1;
                }
            }
            sum += 1;
        }
    }
    cout << sum;
    return 0;
}
