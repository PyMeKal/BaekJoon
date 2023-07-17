#include <iostream>
#include <string>
using namespace std;


int main(){
    
    bool stop = false, pel = true;
    while (not stop){
        string num;
        cin >> num;
        if (num == "0"){
            stop = true;
        }
        else {
            for (int i = 0; i < (num.size() / 2); i++){
            if (num[i] != num[num.size() - i -1]){
                pel = false;
                }
            }
            if (pel){
                cout << "yes" << '\n';
            }
            else{
                cout << "no" << '\n';
            }
            pel = true;
        }
    }
    return 0;
}
