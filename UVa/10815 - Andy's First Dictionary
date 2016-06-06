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
#define ull unsigned long long

#define pcount(num)  __builtin_popcount(num)
#define all(x) x.begin(), x.end()
#define lla(x) x.rbegin(), x.rend()
#define SORT(c) sort(all(c))
#define ssort(v) stable_sort(v.begin(), v.end())
#define sz(v) (int)(v).size()
#define _lst(X) sz(X)-1
//#define _lst(X) (X)[sz((X))-1]

#define IT iterator
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define Contains(X,item) ((X).find(item) != (X).end())
#define CTN(T, x) (T.find(x) != T.end())

#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maximum(v)  *max_element(all(v)
#define minimum(v)  *min_element(all(v))
#define Reverse(x)  reverse(x.begin(),x.end())

#define loop(i,s,e) for(__typeof(s) i=(s);i<=(e);i++)
#define pool(i,e,s) for(__typeof(e) i=(e);i>=(s);i--)

#define FORIT(i, m) for (__typeof((m).begin()) i=(m).begin(); i!=(m).end(); ++i)

#define siter(n,T1)  for(set<T1>::iterator it=n.begin();it!=n.end();it++)
#define miter(n,T1,T2)  for(map<T1,T2>::iterator it=n.begin();it!=n.end();it++)
#define meter(n,T1,T2)  for(map<T1,T2>::iterator it=n.end();it!=n.begin();it--)

#define ps(x) cout<<"Case "<<++x<<": "
#define pcs(x) pf("Case %d: ", ++x)
#define newl '\n'
#define Newl "\n"
#define nl puts ("")
#define sqr(a) ((a)*(a))
#define MAX 1e12

#define IOS ios_base::sync_with_stdio(0)
using namespace std;
int main(int argc, char const *argv[])
{
	string s="";
	set<string> st;
	while(cin >> s){
		string temp="";
		loop(i, 0, sz(s)){
			s[i] = tolower(s[i]);
			if( isalpha(s[i]) ) temp+=s[i];
			eef( temp!="" ){
				st.insert(temp);
				temp="";
			}
		}
		
	}
	siter(st, string) cout<<*it << newl;

	return 0;
}
// getline(cin, s) WAS A PROBLEM :p 
// I was getting SPACES as words :p 
