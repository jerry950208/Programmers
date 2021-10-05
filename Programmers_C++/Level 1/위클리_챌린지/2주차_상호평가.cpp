#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<vector<int>> scores){
    
    string answer = "";
    vector<int>sum(scores.size(), 0);
    vector<int>avg(scores.size(), 0);
    
    for(int i=0; i<scores.size(); i++){
        
        int max_score = -1;
        int min_score = 101;
        
        for(int j=0; j<scores.size(); j++){
            if(j != i){
                sum[i] += scores[j][i];
                max_score = max(max_score, scores[j][i]);
                min_score = min(min_score, scores[j][i]);
            }
        }
        
        if(scores[i][i] < min_score || scores[i][i] > max_score)
            avg[i] = sum[i] / (scores.size() - 1);
        else{
            sum[i] += scores[i][i];
            avg[i] = sum[i] / scores.size();
        }
    }
    
    for(int i=0; i<scores.size(); ++i){
        if(avg[i] >= 90) answer.push_back('A');
        else if(avg[i] >= 80) answer.push_back('B');
        else if(avg[i] >= 70) answer.push_back('C');
        else if(avg[i] >= 50) answer.push_back('D');
        else answer.push_back('F');
    }
    
    return answer;
}
/*
#include <string>
#include <vector>

using namespace std;

char func_grade(int i){
    if(i > 90)
        return 'A';
    
    else if(i >= 80 && i < 90)
        return 'B';
    
    else if(i >= 70 && i < 80)
        return 'C';
    
    else if(i >= 50 && i < 70)
        return 'D';
    
    else
        return 'F';
}

string solution(vector<vector<int>> scores) {
    string answer = "";
    vector<int> avg(scores.size(), 0);
    vector<int> min(scores.size(), 0), max(scores.size(), 0);
    
    for(int i=0; i<scores.size(); i++){
        min.push_back(scores[i][i]);
        max.push_back(scores[i][i]);
        
        for(int j=0; j<scores.size(); j++){
            avg.push_back(scores[i][j]);
            
            if(scores[i][i] < scores[i][j])
                max[i] = scores[i][j];
            
            else if(scores[i][i] > scores[i][j])
                min[i] = scores[i][j];
        }
    }
    
    for(int i=0; i<scores.size(); i++){
        if(min[i] == scores[i][i] || max[i] == scores[i][i])
            answer += func_grade(avg[i] / scores.size()-1);
        else
            answer += func_grade(avg[i] / scores.size());
    }
    
    return answer;
}*/
