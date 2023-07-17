#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    getline(cin, a);
    int alpha[26] = {0};
    for (int i = 0; i < a.length(); i++){
        if (a[i] < 97){
            alpha[a[i] - 65] += 1;
        }
        else {
            alpha[a[i] - 97] += 1;
        }
    }

    int max = 0;
    bool same = false;
    for (int i = 1; i < 26; i++){
        if (alpha[i] > alpha[max]){
            max = i;
            same = false;
        }
        else if (alpha[i] == alpha[max]){
            same = true;
        }
    }

    if (same)
        cout << "?";
    else
        cout << (char)(max + 65);
    return 0;
}
