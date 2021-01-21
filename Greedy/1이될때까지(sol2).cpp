#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k;
	scanf("%d %d", &n, &k);
	
	int result = 0;
	
	while(n > 1){
		
		int target = (n / k) * k; // k로 나누어 지는 가장 큰 수를 target 에 저장. 
		result += (n - target); // 1을 빼야하는 횟수 계산. 
		n = target;
		
		if(n < k) break;
		
		n /= k;
		result += 1;
	}
	
	result += (n-1); // n이 k보다 작은 수 일 때 더이상 나눠질 수 없으므로 1씩 빼기
	
	printf("%d", result);
	
	return 0;
}

