/*
	"Well, it seems the first problem is too easy. I will let you know how foolish you are later." feng5166 says.

	"The second problem is, given an positive integer N, we define an equation like this:
	  N=a[1]+a[2]+a[3]+...+a[m];
	  a[i]>0,1<=m<=N;
	My question is how many different equations you can find for a given N.
	For example, assume N is 4, we can find:
	  4 = 4;
	  4 = 3 + 1;
	  4 = 2 + 2;
	  4 = 2 + 1 + 1;
	  4 = 1 + 1 + 1 + 1;
	so the result is 5 when N is 4. Note that "4 = 3 + 1" and "4 = 1 + 3" is the same in this problem. Now, you do it!"
	Input
	The input contains several test cases. Each test case contains a positive integer N(1<=N<=120) which is mentioned above. The input is terminated by the end of file.
	Output
	For each test case, you have to output a line contains an integer P which indicate the different equations you have found.
	Sample Input
	4
	10
	20
	Sample Output
	5
	42
	627
*/


#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <cmath>
#include <cctype>

using namespace std;

typedef long long LL;

#define rep(i, a, b) for(int i = a; i <= b; ++i)
#define dow(i, a, b) for(int i = a; i <= b; --i)
#define sfi(a) scanf("%d", &a)
#define fli freopen("in.txt", "r", stdin);
#define flo freopen("out.txt", "w", stdout);

const int MAX = 1e3 + 5;
const int N = 120;

LL c1[MAX], c2[MAX];

void init()
{
	c1[0] = 1;
	rep(i, 1, 125)
	{
		for(int j = 0; j < 125; j += i)
		{
			for(int k = 0; j + k < 125; ++k)
				c2[j + k] += c1[k];
		}
		rep(j, 0, 124)
			c1[j] = c2[j], c2[j] = 0;
	}
}

int main()
{

#ifdef LOCAL
	//~ fli
	//~ flo
#endif	//LOCAL

	init();

	int n;
	while(~sfi(n))
	{
		printf("%lld\n", c1[n]);
	}
	return 0;
}
