#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string arrangement) { //쇠막대기 - success
    int answer = 0;
    stack<char> st;
    char str[arrangement.size()];
    
    for(int i = 0; i < arrangement.size(); i++){
        str[i] = arrangement.at(i);
    }
    
    for(int i = 0; i < arrangement.size(); i++){
        if(str[i] == '(') st.push(str[i]);
        else{
            st.pop();
            if(str[i - 1] == '(') answer += st.size();
            else answer++;
        }
    }
    return answer;
}