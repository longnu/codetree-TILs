#include <iostream>
using namespace std;
int cnt;
int recur(int n)
{
    if(n==1)
    {
        return cnt;
    }
    if(n%2 == 0)
    {
        cnt++;
        return recur(n/2); 
    }
    
    if(n%2!=0)
    {
        cnt++;
        return recur(n*3+1);
    }
}

int main() {
    
    int n ;
    cin >> n;

    cout << recur(n);

    return 0;
}