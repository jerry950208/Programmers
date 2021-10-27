//감사해요 명준 선생님 *^^*
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    
    // 초기설정
    int answer = 0;
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    // 학생 수 만큼 크기를 가지는 배열 생성, 모두 1벌씩 가지고 있다고 가정
    int student[n + 2];
    fill(student, student + n + 2, 1); // student의 첫번째 인덱스 부터 stduent + n + 2의 인덱스 까지의 값을 1로 초기화 해준다
    
    // 계산 편의를 위해 0번, n + 1번 학생도 생성
    student[0] = 0;
    student[n + 1] = 0;
    
    // 체육복을 도둑맞은 학생
    for(int i=0; i<lost.size(); i++)
        student[lost[i]]--;
    
    // 여벌 체육복을 가지고 있는 학생
    for(int i=0; i<reserve.size(); i++)
        student[reserve[i]]++;
    
    // 문제 알고리즘 시작
    for(int i=1; i<=n; i++){
        
        // 체육복을 도둑맞은 학생일경우
    	if(student[i] == 0){
            
            // 앞에 친구가 여벌 체육복이 있을경우
            if(student[i - 1] > 1){
                student[i - 1]--;
                student[i]++;
               	answer++;
            }
            
            // 뒤에 친구가 여벌 체육복이 있을경우
            else if(student[i + 1] > 1){
                student[i + 1]--;
                student[i]++;
                answer++;
            }
        }
        
        // 체육복을 정상적으로 가지고 있을경우
        else
            answer++;
    }
    return answer;
}
