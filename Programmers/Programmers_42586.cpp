#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) { //기능개발 - success
    vector<int> answer;
    vector<int> tValue;
    queue<int> pq;
    queue<int> sq;
    
    for(int i = 0; i < progresses.size(); i++){
        pq.push(progresses[i]);
        sq.push(speeds[i]);
    }
    
    int day = 0;
    while(!pq.empty()){
        int size = pq.size();
        if(pq.front() < 100){
            while(size--){
                int tmp = pq.front() + sq.front();
                pq.push(tmp);
                sq.push(sq.front());
                pq.pop();
                sq.pop();
            }
            ++day;
        }
        else{ //100이상인 경우
            pq.pop();
            sq.pop();
            tValue.push_back(day);
        }
    }
    
    for(int i = 0; i < tValue.size(); i++){
        int cnt = 1;
        for(int j = i + 1; j < tValue.size(); j++){
            if(tValue[i] == tValue[j]) {
                cnt++;
                tValue.erase(tValue.begin() + j);
                j--;
            }
            else break;
        }
        answer.push_back(cnt);
    }
    
    return answer;
}