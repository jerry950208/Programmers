/*
1번 수포자가 찍는 방식 : 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ....
2번 수포자가 찍는 방식 : 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5 ...
3번 수포자가 찍는 방식 : 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5....

1번 문제부터 마지막 문제까지의 정답이 순서대로 들은 배열 answers가 주어졌을때, 가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 return 하도록 solution함수를 작성하라

제한조건
- 시험은 최대 10,000 문제로 구성되어 있습니다
- 문제의 정답은 1, 2, 3, 4, 5 중 하나입니다
- 가장 높은 점수를 받은 사람이 여럿일경우, return 하는 값을 오름차순 정렬해주세요
*/
#include <string>
#include <vector>

using namespace std;

int max(int a, int b){
    return a > b ? a : b;
}

vector<int> solution(vector<int> answers) {
    
    int give_up_1[5] = {1, 2, 3, 4, 5};
    int give_up_2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int give_up_3[10] = {3, 3, 1, 1, 2, 2,4, 4, 5, 5};
    
    vector<int> answer;
    vector<int> score(3);
    int high_score = 0;
    
    for(int i=0; i<answers.size(); i++){
        if(answers[i] == give_up_1[i % 5]) score[0]++;
        if(answers[i] == give_up_2[i % 8]) score[1]++;
        if(answers[i] == give_up_3[i % 10])
            score[2]++;
    }
    
    high_score = max(max(score[0], score[1]), score[2]);
    
    for(int i=0; i<3; i++)
        if(score[i] == high_score)
            answer.push_back(i+1);
    
    return answer;
}

/*
//다른사람의 풀이
//새로운 함수 : max_element

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> one = {1,2,3,4,5};
vector<int> two = {2,1,2,3,2,4,2,5};
vector<int> thr = {3,3,1,1,2,2,4,4,5,5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> they(3);
    for(int i=0; i<answers.size(); i++) {
        if(answers[i] == one[i%one.size()]) they[0]++;
        if(answers[i] == two[i%two.size()]) they[1]++;
        if(answers[i] == thr[i%thr.size()]) they[2]++;
    }
    int they_max = *max_element(they.begin(),they.end());	
    for(int i = 0; i< 3; i++) {
        if(they[i] == they_max) answer.push_back(i+1);
    }
    return answer;
}
*/
