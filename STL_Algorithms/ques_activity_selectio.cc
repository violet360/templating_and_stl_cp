/*
You are given n activities (from 0 to n-1) with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

Input Format
The first line consists of an integer T, the number of test cases. For each test case, the first line consists of an integer N, the number of activities. Then the next N lines contain two integers m and n, the start and end time of each activity.

Constraints
1<=t<=50 1<=n<=10000 1<=A[i]<=100

Output Format
For each test case find the maximum number of activities that you can do.

Sample Input
1 
3
10 20
12 15
20 30
Sample Output
2
Explanation
Person only do 0th and 2nd activities.
*/

//Solution:
#include <iostream>
#include<vector>
#include<algorithm>
#define pb push_back
using namespace std;

int main(void)
{
    int choice, a, b;int n;
    cin>>choice;
    
    int count=0;
    while(choice--) 
    {
         cin>>n;
        vector< pair <int, int> >v;
        for(int i=0; i<n; ++i)
        {
            cin>>a>>b;
            v.pb({b,a});
        }
        sort(v.begin(), v.end());
        

int j=0;
        for(int i=1; i<n; i++)
        {
            if(v[i].second >= v[j].first)
            {
                // count<<count;
                j = i;
                count++;
            }
        }
        cout<<count+1<<endl;
    }
} 
