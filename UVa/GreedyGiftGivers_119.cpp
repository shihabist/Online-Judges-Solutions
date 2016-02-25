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
#define _lst(X) (X)[sz((X))-1]

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
	int f, l = 1;


	while(cin>>f){
		vector<string> name;
		map<string, int> map;
		string a;
		loop(i, 0, f-1) {
			cin >> a;
			name.pb(a);
			map[ a ] = 0;
		}
		string giver = "", tm = "";
		int gamount, taker, t;
		loop(i, 0, f-1){
			cin >> giver >> gamount >> taker;
			t = taker;
			
			while(t--){
				cin >> tm;
				if ( gamount ){
					int am = ( gamount/taker );
					map[ tm ] += am;
					map[ giver ] -= am;
				}
			}


		}

		if ( l!=1 ) cout<<newl;
		int last = f-1;
		loop(i, 0, last){
			cout<<name[ i ]<<" "<<map[ name[ i ] ]<< newl;

		} l++;

	}



	return 0;
}
