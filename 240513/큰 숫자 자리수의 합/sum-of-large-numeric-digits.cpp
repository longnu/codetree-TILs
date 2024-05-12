#include <iostream>
using namespace std;

int recur(int gob)
{
    if(gob < 1)
    {
        return 0; 
    }

    return recur(gob/10) + gob%10;
}

int main() {
    
    int a, b, c;

    cin >> a>> b>> c;

    int gob = a * b * c;

    cout << recur(gob);   

    return 0;
}