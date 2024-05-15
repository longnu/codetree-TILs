#include <iostream>
using namespace std;

int main() {
    
    int a, b;
    string n;

    cin >> a >> b >> n;

    int sib = 0;
    for(int i = 0; i <n.size(); i++)
    {
        sib = sib * a + (n[i] - '0');
    }
    int arr[20];
    int cnt = 0;
    while(true)
    {
        if(sib < b)
        {
            arr[cnt++] = sib; 
            break;
        }

        arr[cnt++] = sib%b;
        sib = sib/b;
    }
    for(int i = cnt-1; i >=0; i--)
    {
        cout << arr[i];
    }

    return 0;
}