#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T;
    cin >> T;

    int tc = 0;
    while(T--){
        vector<int> list;
        
        for(int i = 0; i < 10; i++){
            int num;
            cin >> num;

            int sum = 0;
            while(num){
                sum += num % 10;
                num = num / 10;
            }

            list.push_back(sum);
        }

        sort(list.begin(), list.end());

        cout << "#" << ++tc << " " << list[9] << " " << list[0] << '\n';
    }
}