#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> money) {
    int answer = 0;
    int result1 = 0, result2 = 0, result3 = 0;
    
    if(money.size() % 2 == 0){ //집 개수가 짝수인 경우
        for(int i = 0; i < money.size(); i++){
            if(i % 2 == 0) result1 += money[i];
            else result2 += money[i];
        }
        return max(result1, result2);
    }
    
    else { //집 개수가 홀수인 경우
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for(int i = 0; i < money.size(); i++){
            if(i % 2 == 0 && cnt1 != money.size() / 2) {
                result1 += money[i]; 
                cnt1++;
            }
            else if(i % 2 != 0 && cnt2 != money.size() / 2) {
                result2 += money[i]; 
                cnt2++;
            }
        }
        
        for(int i = 2; i < money.size(); i++){
            if(i % 2 == 0 && cnt3 != money.size() / 2) {
                result3 += money[i]; 
                cnt3++;
            }
        }
        
        int result1 = max(result1, result2);
        return max(result1 ,result3);
    }
}