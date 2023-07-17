#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    bool stop = false;

    while (not stop){
        vector<int> v;
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        string tri;

        if (a == 0 && b == 0 && c == 0){
            stop = true;
        }
        else{
            if (v[0] + v[1] <= v[2]){
                tri = "wrong";
            }
            else{
                if (pow(v[0], 2) + pow(v[1],2) != pow(v[2], 2)){
                    tri = "wrong";
                }
                else
                    tri = "right";
            }
        }
        cout << tri << "\n";
    }

    return 0;
}