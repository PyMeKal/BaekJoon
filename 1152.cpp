#include <iostream>
using namespace std;

int main(){
    char a[1000001];
    cin.getline(a, 1000001);
    int num, count = 0;
    bool word = false;
    bool end_of_line = false;
    while (not end_of_line){
        if (a[num] == '\0' && word){
            count += 1;
            end_of_line = true;
        }
        else if (a[num] == '\0'){
            end_of_line = true;
        }
        else if (a[num] != ' ' && not word){
            word = true;
        }
        else if (a[num] == ' ' && word){
            count +=1;
            word = false;
        }
        num += 1;
    }
    cout << count << '\n';
    return 0;
}
