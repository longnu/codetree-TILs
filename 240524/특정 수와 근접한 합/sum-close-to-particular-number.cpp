#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    int arr[100];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int min_val = INT_MAX;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int sum = 0;
            for(int k=0; k<n; k++){
                if(k == i || k == j){
                    continue;
                }
                sum += arr[k];
            }
            min_val = min(min_val, abs(sum-s));
        }
    }
    cout << min_val;

    return 0;
}