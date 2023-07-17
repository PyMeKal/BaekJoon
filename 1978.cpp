#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    
    vector<int> v;
    vector<int> v2;
    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i <= v[v.size()-1]; i++){
        if ((i != 0) && (i != 1)){
            v2.push_back(true);
        }
        else{
            v2.push_back(false);
        }
    }

    for (int i = 2; i < sqrt(v[v.size()-1])+1; i++){
        if (v2[i]){
            int j = 2;
            while (i * j <= v[v.size()-1]){
                v2[i * j] = false;
                j += 1;
            }
        }
    }
    
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        if (v2[v[i]]){
            sum += 1;
        }
    }

    cout << sum;

    return 0;
}