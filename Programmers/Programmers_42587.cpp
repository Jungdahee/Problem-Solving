#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int size = priorities.size();
    
    while(size != 0){
        bool isCheck = false;
        int first = priorities[0];
        for(int i = 1; i < priorities.size(); i++){
            int tmp = priorities[i];
            if(first < tmp) {
                isCheck = true;
                break;
            }
        }
        
        if(isCheck){ //첫 번째 원소보다 큰 수가 존재하는 경우
            priorities.erase(priorities.begin());
            priorities.push_back(first);
            if(location == 0) location = priorities.size() - 1;
            else location--;
        }
        else { //첫 번째 원소가 가장 큰 경우
            priorities.erase(priorities.begin());
            ++answer;
            if(location == 0) break;
            else location--;
        }
        size = priorities.size();
    }
    return answer;
}