#include <iostream>
#include <string>
using namespace std;

int main(){
    int alpha[26];
    for (int i = 0; i < 26; i++){
        alpha[i] = -1;
    }
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++){
        if (alpha[a[i] - (int)'a'] == -1)
            alpha[a[i] - (int)'a'] = i;
    }
    for (int i = 0; i < 25; i++){
        cout << alpha[i] << ' ';
    }
    cout << alpha[25];
    return 0;
}
