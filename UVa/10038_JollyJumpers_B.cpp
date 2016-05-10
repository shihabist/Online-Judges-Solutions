#include <bits/stdc++.h>
#define dbug(x) cout << '>' << #x << ':' << x << endl
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
    int n, mn, mx, a, A[3008], B[3008];
    bool f;
    while(cin >> n){
        f = true;
        loop(i, 0, n-1) cin >> A[i];
        loop(i, 0, n-2) B[i] = abs(A[i] - A[i+1]);
        sort(B, B+n-1);
        loop(i, 1, n-1){
            if ( B[i] == B[i-1] ){
                f = false;
                break;
            } 
        }
        if ( (n == 1) || (f==true &&  B[0]==1 && B[n-2]==n-1))
             cout << "Jolly" << newl;
        else cout << "Not jolly" << newl;

    }
    return 0;
}
