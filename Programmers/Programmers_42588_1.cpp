#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> heights) { //탑 - success
    vector<int> answer(heights.size());
    
    for(int i = heights.size() - 1; i > 0; i--){
        for(int j = i - 1; j >= 0; j--){
            if(heights[i] < heights[j]){ //높은 탑이 있는 경우
                answer[i] = j + 1;
                break;
            }
            if(j == 0) answer[i] = 0; //높은 탑이 없는 경우
        }
    }
    answer[0] = 0; //첫 번째 탑은 무조건 수신할 수 있는 탑이 없으므로 0 삽입
     
    return answer;
}