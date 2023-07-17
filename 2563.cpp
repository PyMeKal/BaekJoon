#include <iostream>
using namespace std;

int main(){
    bool a[101][101];
    for (int i = 1; i < 100; i++){
        for (int j = 1; j < 100; j++){
            a[i][j] = false;
        }
    } 
    
    int getsu;
    int sum = 0;
    cin >> getsu;

    for (int i = 0; i < getsu; i++){
        int h, w;
        cin >> w >> h;
        for (int j = w; j < w + 10; j++){
            for (int k = h; k < h + 10; k++){
                if (not a[j][k]){
                    a[j][k] = true;
                    sum += 1;
                }
            }
        }
    }
    cout << sum;
}