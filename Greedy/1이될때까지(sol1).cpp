#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k;
	scanf("%d %d", &n, &k);
	
	int result = 0;
	
	while(n > 1){
		if(n % k == 0){ // ������ �������ٸ� ������ 
			n /= k;
			result += 1;
		}
		else{ // ������ �������� �ʴ´ٸ� 1 ���� 
			n -= 1;
			result += 1;
		}
	}
	
	
	
	printf("%d", result);
	
	return 0;
}

