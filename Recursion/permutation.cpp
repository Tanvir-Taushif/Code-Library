#include<bits/stdc++.h>
using namespace std;
vector<int>permutation; //Contain Permutation
bool chosen[500]; //for each element if it is included in the permutation or not

void search(int n)
{
    if(permutation.size()==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<permutation[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(chosen[i]) continue;
            chosen[i]=true;
            permutation.push_back(i);
            search(n);
            chosen[i]=false;
            permutation.pop_back();
        }
    }
}

int main()
{
    search(3);
    return 0;
}

