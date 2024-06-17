#include <iostream>
#include <vector>
using namespace std;

vector<int> answer;

int k, n;

void Print()
{
    for(int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
}

void choose(int curr_num)
{
    if(curr_num==n+1)
    {
        Print();
    }
    else
    {
        for(int i = 1; i <= k; i++)
        {
            answer.push_back(i);
            choose(curr_num+1);
            answer.pop_back();
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> k >> n;
    choose(1);


    return 0;
}