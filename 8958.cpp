#include <iostream>
#include <string>
using namespace std;

int main(){
    int loop;
    cin >> loop;

    for (int i = 0; i < loop; i++){
        int straight = 0, sum = 0;
        string str;
        cin >> str;
        for (int i = 0; i < str.length(); i++){
            if (str[i] == 'O'){
                straight += 1;
                sum += straight;
            }
            else
                straight = 0;
        }
        cout << sum << '\n';
    }
    return 0;
}
