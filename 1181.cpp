#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool comp(char* a, char* b){
    if (strlen(a) > strlen(b)){
        return false;
    }
    else if (strlen(a) == strlen(b))
        if (strcmp(a, b) > 0){
            return false;
        }
    return true;
}

int main(){
    int num, minus = 0;
    cin >> num;

    char** word = new char*[num+1];
    for (int i = 0; i < num; i++){
        word[i] = new char[51];
    }

    for (int i = 0; i < num; i++){
        char* temp = new char[51];
        cin >> temp;
        bool same = false;
        for (int j = 0; j < i; j++){
            if (strcmp(temp, word[j]) == 0){
                same = true;
                minus += 1;
                break;
            }
        }
        if (!same){
            word[i-minus] = temp;
        }
    }

    sort(word, word + (num-minus), comp);
    

    for (int i = 0; i < (num-minus); i++){
        cout << word[i] << '\n';
    }

    return 0;
}