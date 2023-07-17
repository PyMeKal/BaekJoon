#include <iostream>
#include <string>
using namespace std;


int main(){
    int num, sum = 0;
    cin >> num;
    string str = to_string(num), new_string;

    for (int i = num - (str.length() * 9); i < num; i++){
        new_string = to_string(i);
        sum = i;
        for (int j = 0; j < new_string.length(); j++){
            sum += int(new_string[j]) - 48;
        }
        if (sum == num){
            sum = i;
            break;
        }
        sum = 0;
    }
    cout << sum << endl;

    return 0;
}