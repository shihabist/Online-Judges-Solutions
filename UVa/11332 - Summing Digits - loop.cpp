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
#define _lst(X) sz(X)-1

#define IT iterator
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define CTN(T, x) (T.find(x) != T.end())

#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define max4(a,b,c,d) max(max(a,max(b,c)),d)
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
    char a[100];
    mem(a, '\0');
    while(sf("%s", a)){
        int len = strlen(a);
        if (len == 1 and a[0] == '0') break;
        int n = 0, N;
        loop(i, 0, len-1) n += (a[i] - '0' );
        
        while(n > 9){
            int m = n;
            N = 0;
            while(m){
                N += (m%10);
                m = m/10;
            }
            n = N;
        }

        pf("%d\n", n);
    }
    
    return 0;
}
