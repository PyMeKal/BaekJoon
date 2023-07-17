#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    cin >> a;
    int b;
    cin >> b;
    int max = b, min = b;
    for (int i = 0; i < (a-1); i++){
        cin >> b;
        if (b > max)
            max = b;
        else if (b < min)
            min = b;
    }
    cout << min << ' ' << max;
    return 0;
}
