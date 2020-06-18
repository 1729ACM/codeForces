#include<cstdio>
#include<cstring>
#include<vector>
#include <stack>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll ;


int main()
{
    int T;
    cin >> T;
    while(T--){
        int a,b,n;
        cin>>a>>b>>n;
        if(a>n||b>n){cout<<0<<endl;continue;}
        int ans=0;
        if(a<b)swap(a,b);
        while(true){
            if(a>n)break;
            else{
                ans++;
                int temp=a;
                a+=b;
                b= temp;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
