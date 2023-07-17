#include <iostream>
using namespace std;

int main(){
    int a, b;
    bool asc = false;
    bool des = false;
    cin >> a;
    for (int i = 0; i < 7; i++){
        cin >> b;
        if (a > b)
            des = true;
        else 
            asc = true;
        a = b;
    } 
    if (asc && des)
        cout << "mixed";
    else if (asc)
        cout << "ascending";
    else
        cout << "descending";
    return 0;
}
