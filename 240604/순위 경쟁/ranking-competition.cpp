#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int n;

// 입력받은 학생 이름과 점수 변동값을 저장합니다.
char name[MAX_N];
int value[MAX_N];

// 현재 A, B, C의 점수를 나타냅니다.
int score_a = 0, score_b = 0, score_c = 0;

// 명예의 전당 상태를 반환합니다.
// 총 7가지 상황이 있습니다.
int Status(int score1, int score2, int score3) {
    int return_val = 0;

    int maxval = max(score1, score2);
    maxval = max(maxval, score3);

    // 다음과 같이 하면 상태들을 서로 겹치지 않고 정리할 수 있습니다.
    // 1. A가 명예의 전당에 올라가 있는 경우 상태에 1을 더합니다.
    if(score1 == maxval)
        return_val += 1;

    // 2. B가 명예의 전당에 올라가 있는 경우 상태에 2를 더합니다.
    if(score2 == maxval)
        return_val += 2;
    
    // 3. C가 명예의 전당에 올라가 있는 경우 상태에 4를 더합니다.
    if(score3 == maxval)
        return_val += 4;
    
    return return_val;
}

int main() {
    // 입력
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> name[i] >> value[i];
    
    int ans = 0;
    // 순서대로 점수를 변동시켜보며
    // 조합이 몇 번 변동되는지를 조사합니다.
    for(int i = 0; i < n; i++) {
        // 변동이 있는 학생이 A라면
        if(name[i] == 'A') {
            // 현재 점수와, 이후 점수의 상태를 비교했을 때 조합에 변동이 있다면
            // 답을 갱신합니다.
            if(Status(score_a, score_b, score_c) != Status(score_a + value[i], score_b, score_c))
                ans++;
            
            // 값을 갱신해줍니다.
            score_a += value[i];
        }
        // 변동이 있는 학생이 B라면
        else if(name[i] == 'B'){
            // 현재 점수와, 이후 점수의 상태를 비교했을 때 조합에 변동이 있다면
            // 답을 갱신합니다.
            if(Status(score_a, score_b, score_c) != Status(score_a, score_b + value[i], score_c))
                ans++;
            
            // 값을 갱신해줍니다.
            score_b += value[i];
        }
        // 변동이 있는 학생이 C라면
        else {
            // 현재 점수와, 이후 점수의 상태를 비교했을 때 조합에 변동이 있다면
            // 답을 갱신합니다.
            if(Status(score_a, score_b, score_c) != Status(score_a, score_b, score_c + value[i]))
                ans++;
            
            // 값을 갱신해줍니다.
            score_c += value[i];
        }
    }

    cout << ans;
    
    return 0;
}