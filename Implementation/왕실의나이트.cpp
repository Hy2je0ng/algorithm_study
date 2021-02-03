#include <bits/stdc++.h>

#define MAX 8

int main(){
	
	int row, column;
	int result = 0;
	
	scanf("%c%d", &column, &row);
	
	column = column - 'a' + 1; // column 숫자 좌표로 변환 
	
	int dx[MAX] = {2, 2, -2 ,-2, 1, 1, -1, -1};
	int dy[MAX] = {1, -1, 1, -1, 2, -2, 2, -2};
					
	
	for(int i = 0; i < MAX; i++){
		
		int nextRow =  row + dx[i];
		int nextColumn = column + dy[i];
		
		if( (nextRow >= 1) && (nextRow <= 8) && // 행 범위 검사 
			(nextColumn >= 1) && (nextColumn <= 8) ){ // 열 범위 검사 
			result += 1;
		}
	}
	
	printf("%d", result);
	
	return 0;
}
