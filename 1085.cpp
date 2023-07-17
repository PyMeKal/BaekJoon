#include <iostream>
using namespace std;


int main(){
    
    int x,y,w,h,x_short,y_short;
    cin >> x >> y >> w >> h;
    if ((w - x) > x)
        x_short = x;
    else
        x_short = w-x;
    if ((h - y) > y)
        y_short = y;
    else
        y_short = h-y;
    if (x_short > y_short)
        cout << y_short;
    else
        cout << x_short;

    return 0;
}
