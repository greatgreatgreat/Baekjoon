#pragma warning (disable : 4996)
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int n, ans, dp[1100][3], paint[1010][3];
int main()
{
	//freopen("input.txt", "r", stdin);
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		scanf("%d %d %d", &paint[i][0], &paint[i][1], &paint[i][2]);
	}
	dp[0][0] = 0; dp[0][1] = 0; dp[0][2] = 0;
	for (int i = 1; i <= n; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + paint[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + paint[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + paint[i][2];
	}
	ans = min(dp[n][0], min(dp[n][1], dp[n][2]));

	printf("%d\n", ans);

	return 0;
}

