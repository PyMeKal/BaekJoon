#include <iostream>
using namespace std;

int main(){
    int a, b;
    int a_hun, a_ten, a_one;
    int b_hun, b_ten, b_one;
    cin >> a >> b;
    
    a_hun = a / 100;
    a_ten = (a / 10) % 10;
    a_one = a % 10;
    b_hun = b / 100;
    b_ten = (b / 10) % 10;
    b_one = b % 10;

    int new_a = a_one * 100 + a_ten * 10 + a_hun;
    int new_b = b_one * 100 + b_ten * 10 + b_hun;

    if (new_a > new_b)
        cout << new_a;
    else   
        cout << new_b;

    return 0;
}
