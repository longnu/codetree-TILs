#include <iostream>
#include <climits>
#define MAX_R 1000
int arr[MAX_R+1];
int n;
int pos_x[MAX_R +1];
int pos_y[MAX_R +1];
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> pos_x[i];
        cin >> pos_y[i];
    }
    int answer = INT_MAX;
    for(int i =0; i < n; i++)
    {
        int distance = 0;
        for(int j = i+1; j < n; j++)
        {
            answer = min(answer,(pos_x[i]-pos_x[j])*(pos_x[i]-pos_x[j]) + (pos_y[i]-pos_y[j])*(pos_y[i]-pos_y[j]));
        }
    }
    cout << answer;


    return 0;
}