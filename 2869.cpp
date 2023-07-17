#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, v;
    cin >> a >> b >> v;
    int gap = a - b;
   
    if (gap > (v - a)){
        cout << (v / gap) + 1;
    }
    else{
        cout << ((v-a)/gap) + 1;
    }
}