#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string a, b;

bool panbyul(string a, string b)
{
for(int i = 0 ; i < a.size(); i++)
    {
        if(a[i]!=b[i]) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    
    cin >> a >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a.compare(b) == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}