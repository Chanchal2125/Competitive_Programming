#include <iostream>
#include <string>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define ll             long long int
#define ld             long double
#define mod            1000000007
#define endl           "\n"
#define vi             vector<ll>
#define vs             vector<string>
#define pii            pair<ll, ll>
#define ump            unordered_map
#define mp             map
#define pq_max         priority_queue<ll>
#define pq_min         priority_queue<ll,vi,greater<ll>
#define ff             first
#define ss             second
#define mid(l,r)       (l+(r-l)/2)
#define loop(i,a,b)    for(int i=(a); i <=(b);i++)
#define looprev(i,a,b) for(int i=(a); i >=(b);i--)
#define clr(val)       memset(val,0,sizeof(val))
#define what_is(x)     cerr << #x << " is " << x << endl; 
#define OJ             \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 /*
    1
    5 10
    2 4 1 35 1        1
 */
 
int main() 
{
    ll t,a,b;
    cin>>t; 
 
    while(t--){
        ll count = 0;
        cin>>a>>b;
        vector <ll> dp(a);
        loop(i,0,a-1){
            cin>>dp[i];
            dp[i] = dp[i] + b;
        }
        loop(i,0,a-1){
            if (dp[i] % 7 == 0) count += 1;
        }      
        cout<<count<<endl; 
    }
 
 
return 0;
   
}