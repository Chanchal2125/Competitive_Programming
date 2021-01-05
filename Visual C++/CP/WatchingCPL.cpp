#include <iostream>
#include <iomanip>
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
 
 
int main() 
{
    ll t;
    cin>>t;
 
    while(t--){
        ll n,k,s = 0;
        cin>>n>>k;

        ll dp[n];
        loop(i,0,n-1){
            cin>>dp[i];
            s += dp[i];
        }
        ll c = 0;
        ll a,b;
        a = b = 0;
        if (s < 2 * k || n == 1){          //Base Case
            cout<<-1<<endl;
        }
        else{
            sort(dp,dp+n);

            looprev(i,n-1,0){
                if (a < k){
                    a += dp[i];
                    c += 1;
                }
            }
            ll dev = c;
            looprev(i,n-1-c,0){
                if (b < k){
                    b += dp[i];
                    c += 1;
                }
            }
            if (a >= k && b >= k){
                cout<<c<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
 
return 0;
   
}