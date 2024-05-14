#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <algorithm>
string T;

bool checkpartarray(string a)
{
    for(int i = 0; i < T.size(); i++)
        {
            if(T[i] != a[i])
            {
                return false;
            }
        }

    return true;
}

int main() {
    int n, k;
    cin >> n >>k;

    cin >> T;

    vector<string> abc;

    for(int i = 0; i < n; i++)
    {
        string a;
        cin >> a;

        if(checkpartarray(a))
        {
            abc.push_back(a);
        }    
    }

    sort(abc.begin(), abc.end());

    cout << abc[k-1];


    return 0;
}