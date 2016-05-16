#include <bits/stdc++.h>
#define dbug(x) cout << '>' << #x << ':' << x << endl
#define dbg(x) cout << '>' << #x << ':' << x << " "

#define pline    cout << "_________________________" << endl
#define mem(x, v) memset(x, v, sizeof(x))


#define eef else if
#define sf scanf
#define pf printf
#define i64 long long
#define ll  long long
#define ui64 unsigned long long

#define pcount(num)  __builtin_popcount(num)
#define all(x) x.begin(), x.end()
#define lla(x) x.rbegin(), x.rend()
#define SORT(c) sort(all(c))
#define ssort(v) stable_sort(v.begin(), v.end())
#define sz(v) (int)(v).size()
#define _lst(X) (X)[sz((X))-1]

#define IT iterator
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define CTN(T, x) (T.find(x) != T.end())

#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maximum(v)  *max_element(all(v))
#define minimum(v)  *min_element(all(v))
#define Reverse(x)  reverse(x.begin(),x.end())

#define loop(i,s,e) for(__typeof(s) i=(s);i<=(e);i++)
#define pool(i,e,s) for(__typeof(e) i=(e);i>=(s);i--)

#define FORIT(i, m) for (__typeof((m).begin()) i=(m).begin(); i!=(m).end(); ++i)

#define ps(x) cout<<"Case "<<++x<<": "
#define pcs(x) pf("Case %d: ", ++x)
#define newl '\n'
#define Newl "\n"
#define nl puts ("")
#define sqr(a) ((a)*(a))
#define MAX 1e12
#define intmax 2147483647

#define FAST ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FAST;
    int n;
    
    while(cin >> n){
        if  ( n > 0 && n < 5 ) cout << "few" << newl;
        eef ( n > 4 && n < 10 ) cout << "several" << newl;
        eef ( n > 9 && n < 20 ) cout << "pack" << newl;
        eef ( n > 19 && n < 50 ) cout << "lots" << newl;
        eef ( n > 49 && n < 100 ) cout << "horde" << newl;
        eef ( n > 99 && n < 250 ) cout << "throng" << newl;
        eef ( n > 249 && n < 500 ) cout << "swarm" << newl;
        eef ( n > 499 && n < 1000 ) cout << "zounds" << newl;
        eef ( n > 999 ) cout << "legion" << newl;

    }
    

    return 0;
}
