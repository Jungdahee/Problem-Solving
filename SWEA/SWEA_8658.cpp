#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){ //summation - success
    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){
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

        cout << "#" << tc << " " << list[9] << " " << list[0] << '\n';
    }
}