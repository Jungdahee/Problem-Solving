#include <string>
#include <vector>

using namespace std;

long long solution(int n) { //멀리 뛰기 - success
    int dp[n];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    
    for(int i = 4; i <= n; i++) dp[i] = (dp[i - 2] + dp[i - 1]) % 1234567;

    return dp[n];
}