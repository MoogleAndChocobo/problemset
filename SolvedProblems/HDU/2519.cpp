#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
#include <queue>
#include <set>
#include <map>
#include <functional>
#include <cmath>
#include <cctype>

using namespace std;

typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;

#define rep(i, a, b) for(int i = a; i <=b; i++)
#define dow(i, a, b) for(int i = a; i >=b; i--)
#define mem(a) memset(a, 0, sizeof(a))
#define mst(a, b) memset(a, b, sizeof(a))
#define sfi(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define sfd(a) scanf("%lf"�� &a)
#define sfs(a) scanf("%s", a)
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define fli freopen("in.txt", "r", stdin);
#define flo freopen("out.txt", "w",stdout);
#define pb(a) push_back(a)
#define yes puts("yes");
#define no puts("no");
#define Yes puts("Yes");
#define No puts("No");
#define YES puts("YES");
#define NO puts("NO");

const int dirnd[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
const int dirrd[6][3] = {{0,1,0},{0,-1,0},{-1,0,0},{1,0,0},{0,0,1},{0,0,-1}};
const int MOD = 1e9 + 9;
const int MAX = 1e5 + 10;
const int INF = 0x3f3f3f3f;
const int N = 1e3;
const LL LINF = 0x3f3f3f3f3f3f3f;


int main()
{
#ifdef LOCAL
	//~ fli
	//~ flo
#endif	//LOCAL

	int T;
	sfi(T);
	rep(kase, 1, T)
	{
		double a, b;
		scanf("%lf%lf", &a, &b);
		double ans = 1.0;
		dow(i, (int)a, (int)(a - b + 1))
			ans *= (double)i;
		//~ cout << ans << endl;
		double tmp = 1;
		rep(i, 2, (int)b)
			tmp *= (double)i;
		//~ cout << tmp << endl;
		printf("%.lf\n", ans / tmp);
	}
	return 0;
}