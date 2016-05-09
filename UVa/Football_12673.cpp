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
#define maximum(v)  *max_element(all(v)
#define minimum(v)  *min_element(all(v))
#define Reverse(x)  reverse(x.begin(),x.end())

#define loop(i,s,e) for(__typeof(s) i=(s);i<=(e);i++)
#define pool(i,e,s) for(__typeof(e) i=(e);i>=(s);i--)

#define FORIT(i, m) for (__typeof((m).begin()) i=(m).begin(); i!=(m).end(); ++i)

#define siter(n,T1)  for(set<T1>::iterator it=n.begin();it!=n.end();it++)
#define miter(n,T1,T2)  for(map<T1,T2>::iterator it=n.begin();it!=n.end();it++)

#define ps(x) cout<<"Case "<<++x<<": "
#define pcs(x) pf("Case %d: ", ++x)
#define newl '\n'
#define Newl "\n"
#define nl puts ("")
#define sqr(a) ((a)*(a))
#define MAX 1e12

#define FAST ios_base::sync_with_stdio(0)
using namespace std;


int main(){
    int matches, goals, a, b, m, wins, stop, draw;

    while(sf("%d %d", &matches, &goals)==2){
        wins = draw = 0, m = matches;
        vector<int> need;
        while(m--){
            sf("%d %d", &a, &b);
            if ( a > b ) wins++;
            else {
                need.pb((b+1) - a );
            }
        }
        sort(all(need));
        for(int i = 0; i<sz(need); i++){
            if ( goals < 1 ){
                loop(j, i, sz(need)-1){
                    if ( need[j] == 1 ){
                        draw++;
                        goals--;
                    } 
                }
                break;
            } 
            if ( goals >= need[i] ){
                goals -= need[i];
                wins++;

            }
            if ( goals > 0 && goals+1 == need[i] ){
                draw++;
                goals--;
            }
        }

        pf("%d\n", (wins*3) + draw);
    }


    return 0;
}
/*
Input:

3 1
2 1
1 2
1 3
3 3
1 1
2 2
3 3
2 1
1 1
2 2
7 0
4 2
1 1
1 5
2 2
3 3
4 4
0 6
4 0
1 1
2 2
1 3
0 4
3 10
0 8
0 2
0 0
5 3
1 1
1 3
1 2
1 2
1 2 
5 4
0 1
0 1
0 1
0 1
1 8
2 1
0 1
2 2
2 1
0 1
0 1

Output:

4
9
4
7
2
6
6
6
3
1


*/
