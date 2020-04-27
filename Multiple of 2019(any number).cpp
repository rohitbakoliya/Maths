//https://atcoder.jp/contests/abc164/tasks/abc164_d
/*
Given is a string S consisting of digits from 1 through 9.
Find the number of pairs of integers (i,j) (1≤i≤j≤|S|) that satisfy the following condition:
Condition: In base ten, the i-th through j-th characters of S form an integer that is a multiple of 2019
*/
#include<bits/stdc++.h>
using namespace std;
#define sz(a) int((a).size())
#define int long long
#define Int int32_t
#define all(c) c.begin(), c.end()
#define FAST ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define pii pair< int , int >
#define pb push_back
#define F first
#define S second
#define endl "\n"
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define bitcnt(n) __builtin_popcountll(n)
#define setpre(n) cout << fixed << setprecision(n)
#define tr(c) for(auto x : c )cout << x << " ";
#define ol(c , s , e ) for(int pos=s; pos<e ; pos++) cout << c[pos] << " ";
#define inf 1e18;
#define PI acos(-1)
const int M = 1000000007;
const int N=2e5+5;
//#define Rohit
#ifdef Rohit
template<typename... T >
void bug(T... __VA_ARGS__) {
    ((cerr << __VA_ARGS__ << " ") , ...);
}
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", bug(__VA_ARGS__) , cerr << endl;
#endif

/*
 *
 * LOGIC:
 * 1) https://codeforces.com/blog/entry/76539?#comment-610976
 * 2) https://codeforces.com/blog/entry/76539?#comment-611687
 *
 * Just construct number from start contiguously and store frequency of remainder.
 * If n is length of string at stage i number will be N=d0∗10n−1+d1∗10n−2+...+di−1∗10n−i−1
    let Ri=Nmod2019
    So at any stage if remainder is Ri see how many time this remainder has occurred previously
    excluding current one and add this to final result. For this you ca just use an array or Map whatever.

    And to explain his doubt. let's say remainder r is same for two indices iandj(i<j)
    so number formed at index iandj will be of the form Ni=2019∗k1+randNj=2019∗K2+r
    so number between segment [i,j] will be (Nj−Ni) whose remainder got canceled out and
    we got 2019∗(K2−K1) which is clearly divisible by 2019.

 */

int f[2020];
void solve() {
    string s;
    cin >> s;
    int cur = 1;
    int mod = 0;
    int ans = 0;
    f[0] = 1;
    for(int i=s.size()-1 ; i>=0 ; i--){
        mod = (mod + cur*(s[i] - '0'))%2019;
        cur  = (cur*10)%2019;
        ans+=f[mod];
        f[mod]++;
    }
    cout << ans << endl;

}

signed main()
{
//    FAST;
    //TODO:  check test cases are there or not?
    int tc=1;
//    cin >> tc;
    for(int t = 1 ; t <= tc ; t++)
    {
        solve();
    }
}
