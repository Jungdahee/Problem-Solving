#include <string>
#include <vector>
#include <queue>

using namespace std;
    
//방문 표시 기록할 배열
int visit[200];

int solution(int n, vector<vector<int>> computers) { //네트워크 - success
    int answer = 0;
    queue<int> q;

    for(int i = 0; i < n; i++){
    	if(visit[i] == 0) { //방문하지 않은 노드 queue에 삽입하고 방문 표시
            answer++;
            q.push(i);  
        	visit[i] = 1; 
    	} 

        while(!q.empty()){
        	int tmp = q.front();
          	q.pop();

          	for(int i = 0; i < n; i++){
              	if(computers[tmp][i] == 1 && visit[i] == 0){ //연결되어 있고 방문하지 않았던 점들 탐색
                    q.push(i);
                    visit[i] = 1;
                }
          	}
    	}
    }
    
    return answer;
}