#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> stack;
    vector<char> vec;
    bool possible = true;

    int put = 1;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        if (stack.empty()){
            int temp = put;
            for (int j = temp; j < a + 1; j++){
                stack.push(put);
                vec.push_back('+');
                put += 1;
            }
            stack.pop();
            vec.push_back('-');
        }
        else {
            if (a < stack.top()){
                possible = false;
                break;
            }
            else if (a == stack.top()){
                stack.pop();
                vec.push_back('-');
            }
            else {
                int temp = put;
                for (int j = temp; j < a + 1; j++){
                    stack.push(put);
                    vec.push_back('+');
                    put += 1;
                }
            stack.pop();
            vec.push_back('-');
            }
        }
    }

    if (possible){
        for (int i = 0; i < vec.size(); i++){
            cout << vec[i] << '\n';
        }
    }
    else {
        cout << "NO";
    }
    
}
