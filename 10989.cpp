#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, max = 0;
    cin >> N;
    
    int num[10001];

    for (int i = 0; i < 10001; i++){
        num[i] = 0;
    }

    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        num[a] += 1;
        if (a > max){
            max = a;
        }
    }

    for (int i = 1; i <= max; i++){
        for (int j = 0; j < num[i]; j++){
            cout << i << '\n';
        }   
    }

    return 0;
}