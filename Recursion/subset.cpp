#include<bits/stdc++.h>
using namespace std;

vector<int> subset; //This vector will store the subsets;

void sub(int k,int n)
{
    if(k>n)
    {
        for(int i=0;i<subset.size();i++)
        {
            cout<<subset[i]<<" ";
        }
        cout<<endl;
        return;
    }
    else
    {
        subset.push_back(k); //Include k in the subset
        sub(k+1,n);
        subset.pop_back();
        //Removing k from the subset;
        sub(k+1,n);
    }
}

int main()
{
    sub(1,3);
    return 0;
}
