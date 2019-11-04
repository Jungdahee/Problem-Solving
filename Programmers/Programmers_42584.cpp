#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) { //주식가격 - success
    vector<int> answer(prices.size());
    
    for(int i = 0; i < prices.size() - 1; i++){
        for(int j = i + 1; j < prices.size(); j++){
            if(prices[i] <= prices[j]) answer[i]++;
            else {
                answer[i]++;
                break;
            }
        }
    }
    return answer;
}
