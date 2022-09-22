#include<bits/stdc++.h>
using namespace std;

vector<int>dp(100000000,-1); //dp is used as map and storing value
vector<int>fibNumber;

int fibonacci(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int num;
    cin>>num; //input the number if fibacci sequence
    for(int i=0;i<num;i++)
    {
        fibNumber.push_back(fibonacci(i));
    }
    for(int i=0;i<num;i++)
    {
        cout<<fibNumber[i]<<" ";
    }
    return 0;
}
