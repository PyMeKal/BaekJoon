#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    
    vector<int> v;

    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    int max = 0;
    
    for (int i = 0; i < v.size(); i++){
        for (int j = i+1; j < v.size(); j++){
            for (int h = j+1; h < v.size(); h++){
                int n;
                n = v[i] + v[j] + v[h];
                if (n > M){
                    break;
                }
                else if (n > max){
                    max = n;
                }
            }
        }
        if (max == M){
            break;
        }
    }

    cout << max;
    
    return 0;
}