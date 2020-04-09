//https://codeforces.com/contest/1316/problem/C
#include<bits/stdc++.h>
using namespace std;
#define sz(a) int((a).size())
#define int long long
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
#define tr(container , s ) for(auto x : container ){cout << x << s; } cout << endl;
#define ol(container , start , end ) for(int i=start; i<end ; i++) {cout << container[i] << " ";} cout << endl;
#define one(x) cerr<<#x<<" : "<<x<<endl;
#define two(x,y) cerr<<#x<<" : "<<x<<" , "<<#y<<" : "<<y<<endl;
#define three(x,y,z) cerr<<#x<<" : "<<x<<" , "<<#y<<" : "<<y<<" , "<<#z<<" : "<<z<<endl;
#define PI acos(-1)
const int M = 1000000007;
const int N=3e5+5;

signed main()
{
    FAST;
    int n , m , p , i , j;
    cin >> n >> m >> p;
    int ai = -1 , bi = -1;
    for(i=0 ; i<n ;  i++)
    {
        cin >> j;
        if(j%p!=0 && ai==-1) ai = i;
    }
    for(i=0 ; i<m ;  i++)
    {
        cin >> j;
        if(j%p!=0 && bi==-1) bi = i;
    }
    cout << ai + bi << endl;


}


