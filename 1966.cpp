#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int test;
    cin >> test;

    for (int i = 0; i < test; i++){
        int n, m;
        cin >> n >> m;
        queue<int> queue;
        vector<int> v;

        for (int j = 0; j < n; j++){
            int import;
            cin >> import;
            queue.push(import);
            v.push_back(import);
        }
        sort(v.begin(), v.end());

        int index = m, count = 0;
        bool stop = false;

        while (not stop){
            if (queue.front() == v.back()){
                queue.pop();
                v.pop_back();
                count += 1;
                if (index == 0){
                    stop = true;
                }
                else{
                    index -= 1;
                }
            }
            else {
                int temp = queue.front();
                queue.pop();
                queue.push(temp);
                if (index == 0){
                    index = queue.size() - 1;
                }
                else{
                    index -= 1;
                }
            }
        }
        cout << count << '\n';
    }
}
