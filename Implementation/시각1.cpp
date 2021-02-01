#include <bits/stdc++.h>

int getDecimal(int n);

int getDigit(int n);

int main(){
	
	int n;
	int result = 0;
	
	scanf("%d", &n);
	
	for(int i = 0; i <= n; i++){ // 시 
		
		if(getDecimal(i) == 3 || getDigit(i) == 3){
			result += 60 * 60;
			continue;
		}

		for(int j = 0; j < 60; j++){ // 분 
		
			if(getDecimal(j) == 3 || getDigit(j) == 3){
				result += 60;
				continue;
			}
					
			for(int k = 0; k < 60; k++){ // ÃÊ 
				
				if(getDecimal(k) == 3 || getDigit(k) == 3){
					result += 1;
					continue;
				}	
			}	
		}
	}
	
	printf("%d", result);
	
	return 0;
}

int getDecimal(int number){
	return number / 10;
}

int getDigit(int number){
	return number % 10;
}
