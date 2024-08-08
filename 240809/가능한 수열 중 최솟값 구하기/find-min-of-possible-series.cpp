#include <iostream>
using namespace std;
#define MAX_N 80
#define NUM_LEN 3

int grid[MAX_N];
int n;
vector<int> series;
int numbers[NUM_LEN] = {4, 5, 6};

bool IsEqual(int start1, int end1, int start2, int end2)
{
    while(true)
    {
        if(start1 > end1)
            break;
        if(series[start1] != series[start2])
            return false;   
        start1++;
        start2++;       
    }
    return true;
}

bool IsPossibleSeries()
{
    for (int idx = 0; idx <(int) series.size(); idx++)
    {
        int len = 1;
        while(true)
        {
            int start1 = idx, end1 = idx + len - 1;
            int start2 = end1 + 1, end2 = start2 + len - 1;
            if(end2 >= (int) series.size())
                break;
            if(IsEqual(start1, end1, start2, end2))
                return false;
            len++;
        }
    }
}

void FindMinSeries(int cnt)
{
    if(cnt == n)
    {
        if(!IsPossibleSeries())
            return;    
        for(int i = 0; i < series.size(); i++)
            cout << series[i];
        exit(0);
    }

    for(int i = 0; i < NUM_LEN; i++)
    {
        series.push_back(numbers[i]);
        FindMinSeries(cnt+1);
        series.pop_back();
    }
}

int main() {
    cin >> n;
    FindMinSeries(0);
    return 0;
}