#include <bits/stdc++.h>
#define dbug(x) cout << '>' << #x << ':' << x << endl
#define pline    cout << "_________________________" << endl
#define mem(x, v) memset(x, v, sizeof(x))


#define eef else if
#define inpi inputt[i]
#define sf scanf
#define pf printf
#define i64 long long
#define ui64 unsigned long long

#define pcount(num)  __builtin_popcount(num)
#define all(x) x.begin(), x.end()
#define lla(x) x.rbegin(), x.rend()
#define SORT(c) sort(all(c))
#define ssort(v) stable_sort(v.begin(), v.end())
#define	sz(v) (int)(v).size()
#define _lst(X) sz(X)-1

#define IT iterator
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second


#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maximum(v)  *max_element(all(v)
#define minimum(v)  *min_element(all(v))
#define Reverse(x)  reverse(x.begin(),x.end())

#define ff(i,s,e) for(int i=(s);i<(int)(e);i++)
#define loop(i,s,e) for(__typeof(s) i=(s);i<=(e);i++)
#define pool(i,e,s) for(__typeof(e) i=(e);i>=(s);i--)

#define FORIT(i, m) for (__typeof((m).begin()) i=(m).begin(); i!=(m).end(); ++i)
#define foreach(it, a) for (__typeof((a).begin()) it = (a).begin(); it != (a).end(); it++)


#define ps(x) cout<<"Case "<<++x<<": "
#define pcs(x) pf("Case %d: ", ++x)
#define newl '\n'
#define Newl "\n"
#define nl puts ("")
#define sqr(a) ((a)*(a))
#define Sqrt(x) sqrt(abs(x))
#define PI 3.141592653589793
#define pi (2.0*acos(0.0))
#define pai acos(-1.0)
#define numdigit(x,y) (((int)(log10((x))/log10((y))))+1)

#define inf (1<<29)
#define MOD 1e9+7

#define eps 1e-9
#define INT(c)  ((int)((c) - '0'))
#define IOS ios_base::sync_with_stdio(0)

using namespace std;

int main(){
	IOS;
	//READ("inp.txt");
	//WRITE("outp.txt");
	string s;
	int t, kase = 0;
	cin >> t;
	while(t--){
		cin >> s;
		int a[ 27 ];
		mem(a, 0);
		loop(i, 0, _lst(s)){
			a[ s[ i ]-96 ]++;
		}
		int mn = 100000;
		loop(i, 1, 26){
			mn = min(mn, a[ i ]);
		}
		ps(kase);
		cout << mn << newl;
	}



	return 0;
}
