#include <iostream>
#include <math.h>
using namespace std;

char **star(int num){
    char **a = new char*[num];
    for (int i = 0; i < num; i++){
        a[i] = new char[num];
    }
    int k = log(num) / log(3);
    int h = 0, w = 0;
    if (k == 1){
        for (int i = h; i < h + 3; i++){
            for (int j = w; j < w + 3; j++){
                if (i != 1 || j != 1){
                    a[i][j] = '*';
                }
                else
                    a[i][j] = ' ';
            }
        }

    }
    else {
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                if (i != 1 || j != 1){
                    star(k-1);
                }
            }
        }
    }
    return a;   
}


int main(){
    int num;
    cin >> num;
    char** result = star(num);
    for (int i = 0; i < num; i++){
            for (int j = 0; j < num; j++){
                cout << result[i][j];
            }
        }
}