#include <string>

using namespace std;

int oneCount(int n){ //1의 개수 반환 메소드
    int nOneCnt = 0;
    while(n){
        if(n % 2 == 1) nOneCnt++;
        n /= 2;
    }
    return nOneCnt;
}

int solution(int n) { //다음 큰 숫자 - success
    int answer = 0;
    int nOneCnt = oneCount(n);
    
    while(true){
        int tmpOneCnt = oneCount(++n);
        if(nOneCnt == tmpOneCnt) { //1의 개수 비교
            answer = n;
            break;
        }
    }
    
    return answer;
}