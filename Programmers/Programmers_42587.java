import java.util.*;

class Solution {
    public int solution(int[] priorities, int location) {
        int answer = 0;
        LinkedList<Integer> q = new LinkedList<Integer>();
        
        for(int i = 0; i < priorities.length; i++) q.add(priorities[i]);
        
        while(!q.isEmpty()){
            boolean isCheck = false;
            int first = q.getFirst();
            for(int i = 1; i < q.size(); i++){
                if(first < q.get(i)){
                    isCheck = true;
                    break;
                }
            }
            
            if(isCheck){ //첫 번째 원소보다 큰 수가 대기목록에 있는 경우
                q.removeFirst();
                q.add(first);
                
                if(location == 0) location = q.size() - 1;
                else location--;
            }
            else{ //첫 번째 원소가 가장 큰 경우
                q.removeFirst();
                answer++;
                if(location == 0) break;
                else location--;
            }
        }
        return answer;
    }
}