#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    vector<char> nv, sv;
    
    for(int i = 0; i < number.length(); i++) {
        nv.push_back(number.at(i));
        sv.push_back(number.at(i));
    }
    
    sort(sv.begin(), sv.end());
    
    for(int i = 0; i < k; i++){
        char dNum = sv[i];
        for(int j = 0; j < nv.size(); j++){
            if(dNum == nv[j]) {
                nv.erase(nv.begin() + j);
                break;
            }
        }
    }
    
    for(int i = 0; i < nv.size(); i++) answer += nv[i];
            
    return answer;
}