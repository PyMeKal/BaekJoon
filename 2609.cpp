#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, gcd;
    cin >> c >> d;

    a = c, b = d;
    do{
        if (a > b){
            gcd = a % b;
            if (gcd == 0){
                gcd = b;
                break;
            }
            else{
                a = b;
                b = gcd;
            }
        }
        else if (a == b){
            gcd = a;
            break;
        }
        else{
            gcd = b % a;
            if (gcd == 0){
                gcd = a;
                break;
            }
            else{
                b = a;
                a = gcd;
            }
        }
    }while (true);

    cout << gcd << '\n' << (c / gcd) * d;


    return 0;
}