#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int total = 0;
    queue<int> q;
    
    for (int i = 0; i < truck_weights.size(); i++) {
        int cWeight = truck_weights[i];
        while(true){
            if (q.size() == bridge_length) { //다리 길이와 올라간 트럭 수가 같은 경우
                total -= q.front();
                q.pop();
            }
            else {
                if (cWeight + total > weight) { //다리를 건널 트럭의 무게, 기존에 있던 트럭 총합과 다리 하중 비교
                    q.push(0); 
                    answer++;
                }
                else { //하중을 넘지 않는 경우 다리 위 건너기 시작
                    q.push(cWeight); 
                    total += cWeight;
                    answer++;
                    break;
                }
            }
        }
    }
    return answer + bridge_length;
}