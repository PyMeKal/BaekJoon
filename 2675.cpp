#include <iostream>
#include <string>
using namespace std;

int main(){
    int loop;
    cin >> loop;
    for (int i = 0; i < loop; i++){
        int str_loop;
        string str;
        cin >> str_loop >> str;
        for (int j = 0; j < str.length(); j++){
            for (int k = 0; k < str_loop; k++){
                cout << str[j];
            }
        }
    cout << '\n';
    }
}
