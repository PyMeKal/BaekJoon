#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(){
    int n;
    cin >> n;
    stack<int> q;

    for (int i = 0; i < n; i++){
        string str;
        cin >> str;
        if (str.compare("push")==0){
            int a;
            cin >> a;
            q.push(a);
        }
        else if (str.compare("pop")==0){
            if (q.empty() == 1){
                cout << -1 << '\n';
            }
            else {
                cout << q.top() << '\n';
                q.pop();
            }
        }
        else if (str.compare("size")==0){
            cout << q.size() << '\n';
        }
        else if (str.compare("empty")==0){
            cout << q.empty() << '\n';
        }
        else if (str.compare("top")==0){
            if (q.empty()==1){
                cout << -1 << '\n';
            }
            else {
                cout << q.top() << '\n';
            }
        }
    }
    return 0;
}