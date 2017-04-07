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

//                      012345678901234567890
#define MAXN            1000000
#define MOD             1E9+7
#define FAST            ios_base::sync_with_stdio(0)

using namespace std;

const ll MAX = 1E9;
const ll LINF = numeric_limits<ll>::max();
const ll LNINF= numeric_limits<ll>::min();
const ll mod = 1E9 + 7;
const int IINF = numeric_limits<int>::max();
const int ININF= numeric_limits<int>::min();



using VI = vector <int>;
using VL = vector <ll>;
using VS = vector <string>;

using PII = pair <int, int>;
using PLL = pair <ll, ll>;
using PIS = pair <int, string>;

using VPI = vector< PII >;

void preprocess(const string&, int);
int search(const string&, const string&, int, int);

int tab[MAXN+8]; 

int main(){
    FAST;
    int t;
    cin >> t;
    loop(Case, 1, t){
        string text = "", pattern = "";
        cin >> text >> pattern;

        int text_sz = sz(text);
        int patt_sz = sz(pattern);

        preprocess(pattern, patt_sz);
        int cnt = search(text, pattern, text_sz, patt_sz);
        cout << "Case " << Case << ": " << cnt << nl;
    }
 
    return 0;
}

void preprocess(const string &patt, int pattsz) { 

    int i = 0, j = -1; tab[0] = -1; 
    while (i < pattsz) { 
        while (j>=0 && patt[i] != patt[j]) j = tab[j]; 
        i++; j++; 
        tab[i] = j; 
    }
} 

int search(const string &txt, const string &patt, int txtsz, int pattsz) { 
    int ret = 0, i = 0, j = 0; 
    while (i < txtsz) { 
        while (j>=0 && txt[i] != patt[j]) j = tab[j]; 
        i++; j++; 
        if (j == pattsz) { 
            ret++; 
            j = tab[j];
        }
    }
    return ret;
}
