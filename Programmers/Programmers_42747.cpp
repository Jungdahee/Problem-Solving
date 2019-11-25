#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) { //H-Index - success
    int answer = 0;
    
    sort(citations.begin(), citations.end()); //오름차순으로 정렬
    
    for(int i = 0; i < citations.size(); i++){
        int up = citations[i]; //기준이 되는 논문 인용 횟수
        int size = citations.size() - i; //인용된 논문 개수
        if(size <= up) {
            answer = size; 
            break;
        }
    }
    return answer;
}