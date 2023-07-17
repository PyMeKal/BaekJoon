#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int K, N;
    cin >> K >> N;

    vector<int> v;

    for (int i = 0; i < K; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    int made = 0;
    int min = *min_element(v.begin(), v.end());
    //int max = *max_element(v.begin(), v.end());
    int length = min;
    int length2;
    bool stop = false;

    while (not stop){
        for (int i = 0; i < K; i++){
            made += v[i] / length;
        }
        if (made < N){
            length2 = length;
            length /= 2;
            made = 0;
        }
        else if (made > N){
            length = (length + length2) / 2;
            made = 0;
        }
        else{
            stop = true;
        }
    }

    bool stop1 = false;
    while (not stop1){
        for (int i = 0; i < K; i++){
            made += v[i] / length;
        }
        if (made >= N){
            length += 1;
            made = 0;
        }
        else{
            stop1 = true;
            length -= 1;
        }
    }

    cout << length;
    return 0;
}