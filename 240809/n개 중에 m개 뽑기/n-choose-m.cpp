#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> combination;

// 방문한 원소들을 출력해줍니다.
void PrintCombination() {
    for(int i = 0; i < combination.size(); i++)
        cout << combination[i] << " ";
    cout << endl;
}

// 지금까지 뽑은 갯수와 뽑을지 말지를 결정할 숫자를 인자로 받습니다. 
void FindCombination(int curr_num, int cnt) {

    // n개의 숫자를 모두 탐색했으면 더 이상 탐색하지 않습니다.
    if(curr_num == n+1) {
        // 탐색하는 과정에서 m개의 숫자를 뽑은 경우 답을 출력해줍니다.
        if(cnt == m)
            PrintCombination();
        return;
    }

    // curr_num에 해당하는 숫자를 사용했을 때의 경우를 탐색합니다.
    combination.push_back(curr_num);
    FindCombination(curr_num + 1, cnt + 1);
    combination.pop_back();

    // curr_num에 해당하는 숫자를 사용하지 않았을 때의 경우를 탐색합니다.
    FindCombination(curr_num + 1, cnt);
}

int main() {
    cin >> n >> m;

    FindCombination(1, 0);
    return 0;
}