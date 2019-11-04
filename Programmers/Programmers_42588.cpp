#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> heights) { //탑 - success
    vector<int> answer;
    
    for(int i = heights.size()-1; i >= 0; i--){
        int num = heights[i];
        
        for(int j = i - 1; j >= 0; j--){
            if(heights[j] > num){
                answer.push_back(j+1);
                break;
            }
            if(j == 0) answer.push_back(0);
            
        }
        if(i == 0)answer.push_back(0);
    }
    reverse(answer.begin(), answer.end());
    
    return answer;
}