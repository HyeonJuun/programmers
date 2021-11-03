#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

long long int A[1000001] = {1, 2, 2, 3, 0};
vector <string> tile;
int tilearr[30] = {0,};
int cnt = 0;
int n;

long long int dp(int n){
	
	//답 구하기 
   for (int i = 4; i < n; i++) {
      A[i]=(A[i - 3] + A[i - 4]) % 20201212;
   }
   return A[n-1];
}		

int main(){

	scanf("%d", &n);
	printf("%lld\n",dp(n));

	
	return 0;
}
