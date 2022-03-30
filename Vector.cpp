#include<bits\stdc++.h>
using namespace std;
int main()
{

    vector<int>v;
    int n;
    cin>>n;
    int x;
    for(int i=1; i<=n; i++)
    {

        cin>>x;
        v.push_back(x);

    }

    cout<<"Size: "<<v.size()<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }




}
