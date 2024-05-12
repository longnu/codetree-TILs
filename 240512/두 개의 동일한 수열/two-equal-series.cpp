#include <iostream>
using namespace std;
#include <algorithm>
#define INT_MAX 100
int arr1[INT_MAX];
int arr2[INT_MAX];
int N;


bool IsSame()
{
    for(int i = 0; i < N; i++)
    {
        if (arr1[i] != arr2[i]) return false; 
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> N;

    for (int i=0; i < N; i++)
    {
        cin>>arr1[i];
    }
    for (int i=0; i < N; i++)
    {
        cin>>arr2[i];
    }

    sort(arr1, arr1 + N);
    sort(arr2, arr2 + N);

    if(IsSame())
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}