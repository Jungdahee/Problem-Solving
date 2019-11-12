import java.util.*;

class Solution {
    static int visit[];
    
    public int solution(int n, int[][] computers) { //네트워크 - success
        int answer = 0;
        visit = new int[n]; //배열 동적으로 생성
        
        for(int i = 0; i < n; i++){
            if(visit[i] == 0){
                answer++;
                bfs(n, i, computers);
            }
        }
        return answer;
    }
    
    static void bfs(int n, int node, int[][] computers){
        LinkedList<Integer> q = new LinkedList<>(); //LinkedList로 구현
        q.add(node); //노드 추가
        visit[node] = 1; //방문 표시
    
        while(!q.isEmpty()){
            int tmp = q.poll();
        
            for(int i = 0; i < n; i++){
                if(computers[tmp][i] == 1 && visit[i] == 0) { //연결되어 있으며 방문하지 않은 노드 탐색
                    q.add(i);
                    visit[i] = 1;
                }
            }
        }
    }
}