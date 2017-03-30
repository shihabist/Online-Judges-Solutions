#include                <bits/stdc++.h>
#define dbug(x)         cout << '>' << #x << ": "  << x << endl
#define dbg(x)          cout << '>' << #x << ": " << x << " "
#define pline           cout << "_________________________" << endl

#define mem(x, v)       memset(x, v, sizeof(x))
#define eef             else if
#define sf              scanf
#define pf              printf
#define ll              long long
#define ull             unsigned long long
#define all(x)          x.begin(), x.end()
#define lla(x)          x.rbegin(), x.rend()
#define SORT(c)         sort(all(c))
#define ssort(v)        stable_sort(v.begin(), v.end())
#define Reverse(x)      reverse(x.begin(),x.end())
#define sz(v)           (int)(v).size()
#define IT              iterator
#define pb              push_back
#define eb              emplace_back
#define ppb             pop_back
#define mp              make_pair
#define fi              first
#define se              second
#define CTN(T, x)       (T.find(x) != T.end())

#define max3(a,b,c)     max(a,max(b,c))
#define min3(a,b,c)     min(a,min(b,c))
#define max4(a,b,c,d)   max(max(a,max(b,c)),d)
#define maximum(v)      *max_element(all(v))
#define minimum(v)      *min_element(all(v))

#define loop(i,s,e)     for(__typeof(s) i=(s);i<=(e);i++)
#define pool(i,e,s)     for(__typeof(e) i=(e);i>=(s);i--)
#define FORIT(i, m)     for(__typeof((m).begin()) i=(m).begin(); i!=(m).end(); ++i)
#define siter(n,T1)     for(set<T1>::iterator it=n.begin();it!=n.end();it++)
#define miter(n,T1,T2)  for(map<T1,T2>::iterator it=n.begin();it!=n.end();it++)
#define meter(n,T1,T2)  for(map<T1,T2>::iterator it=n.end();it!=n.begin();it--)
#define Unique(v)       v.erase(unique(all(v)), v.end()) // Sort first
// #define Unique(v)    v.resize(unique(all(v))-v.begin())
#define pi              2*acos(0.0)
#define sqr(a)          ((a)*(a))
#define INT(c)          ((int)((c) - '0'))
#define CHAR(i)         ((char)(i + int('0')))

#define ps(x)           cout<<"Case "<<++x<<": "
#define pcs(x)          pf("Case %d: ", ++x)
#define PCS(x)          pf("Case %d: ", x)
#define newl            '\n'
#define nl              '\n'
#define nln             puts("")

#define wait            system("pause")

//                      12345678901234567890
#define MAX             1000000000
#define FAST            ios_base::sync_with_stdio(0)


// USE these:
// int mn = numeric_limits<int>::max();
// int mx = numeric_limits<int>::min();

// const ll MAXN = 1E9;
// const ll inf = 1;
// const ll mod = 1E9 + 7;
using namespace std;
using vi  = vector <int>;
using vl  = vector <ll>;
using pii = pair <int, int>;
using pll = pair <ll, ll>;
using vpi = vector< pii >;



int main(){
    FAST;
    int t, d, q, p;
    cin >> t;
    while(t--){
        cin >> d;
        string s[d];
        int lft[d], rght[d];
        loop(i, 0, d-1){
            cin >> s[i] >> lft[i] >> rght[i];
        }
        cin >> q;
        while(q--){
            cin >> p;
            vector<string> ans;
            loop(i, 0, d-1){
                if ( p >= lft[i] && p <= rght[i] ) {
                    ans.eb(s[i]);
                }
                if ( sz(ans) > 1 ) break;
            }
            if ( sz(ans) == 1 ) cout << ans[0];
            else cout << "UNDETERMINED";
            cout << nl;
        }
        if (t) cout << nl;
    }
    return 0;
}
