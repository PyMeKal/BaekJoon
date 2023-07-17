#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    cin >> M >> N;
    
    vector<int> v;

    for (int i = 0; i < N+1; i++){
        if ((i != 0) && (i != 1)){
            v.push_back(true);
        }
        else{
            v.push_back(false);
        }
    }

    for (int i = 2; i < sqrt(N)+1; i++){
        if (v[i]){
            int j = 2;
            while (i * j <= N){
                v[i * j] = false;
                j += 1;
            }
        }
    }
    
    for (int i = M; i < (N+1); i++){
        if (v[i]){
            cout << i << '\n';
        }
    }

    return 0;
}