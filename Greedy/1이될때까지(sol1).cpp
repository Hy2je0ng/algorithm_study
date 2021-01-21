#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k;
	scanf("%d %d", &n, &k);
	
	int result = 0;
	
	while(n > 1){
		if(n % k == 0){ // 나누어 떨어진다면 나누고 
			n /= k;
			result += 1;
		}
		else{ // 나누어 떨어지지 않는다면 1 빼기 
			n -= 1;
			result += 1;
		}
	}
	
	
	
	printf("%d", result);
	
	return 0;
}

