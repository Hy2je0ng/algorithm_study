#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k;
	scanf("%d %d", &n, &k);
	
	int result = 0;
	
	while(n > 1){
		
		int target = (n / k) * k; // k�� ������ ���� ���� ū ���� target �� ����. 
		result += (n - target); // 1�� �����ϴ� Ƚ�� ���. 
		n = target;
		
		if(n < k) break;
		
		n /= k;
		result += 1;
	}
	
	result += (n-1); // n�� k���� ���� �� �� �� ���̻� ������ �� �����Ƿ� 1�� ����
	
	printf("%d", result);
	
	return 0;
}

