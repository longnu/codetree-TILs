#include <iostream>
using namespace std;
#define INT_MAX 10
int arr[INT_MAX];
int N;
int L = 1;

int recur(int index)
{
    if(index == N) return 0;

    int i = 2;
    int greaternumber = max(L, arr[index]);
    int candidateL = greaternumber;
    int smallernumber = min(L, arr[index]);
    while((candidateL % smallernumber)!=0)
    {
        candidateL = greaternumber*i;
        i++;
    }
    L = candidateL;

    recur(index+1);


    return 0; 

}   




int main() {
    // 여기에 코드를 작성해주세요.
    
    cin >> N;

    for(int i =  0; i < N; i++)
    {
        cin >> arr[i]; 
    }

    recur(0);

    cout <<L;

    return 0;
}