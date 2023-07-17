#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binary_search(vector<int> &v, int len, int target){
    int low = 0, high = len - 1;
    while (low <= high){
        int mid = (low + high) / 2;

        if (target == v[mid]) return 1;
        else if (target < v[mid]){
            high = mid -1;
        }
        else if (target > v[mid]){
            low = mid + 1;
        }
    }
    return 0;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    int M;
    cin >> M;
    for (int i = 0; i < M; i++){
        int a;
        cin >> a;
        cout << binary_search(v, N, a) << '\n';
    }
    return 0;
}