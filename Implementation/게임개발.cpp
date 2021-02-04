#include <bits/stdc++.h>

#define MAX 60

int main(){
	
	int n, m, a, b, d;
	int map[MAX][MAX] = {0, };
	int result = 1;
	
	int leftA[4] = {0, -1, 0, 1}; // �� ���⿡�� ���� �������� ���������� �Ÿ� 
	int leftB[4] = {-1, 0, 1, 0};
	
	scanf("%d %d", &n, &m);
	scanf("%d %d %d", &a, &b, &d);
	
	for(int i = 0 ;i < MAX; i++){ // �迭 1�� �ʱ�ȭ 
		for(int j = 0; j < MAX; j++){
			map[i][j] = 1;
		}
	}

	for(int i = 1 ;i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%d", &map[i][j]);
		}
	}	
	
	a += 1; // ��ǥ (1, 1) ~ �� ���� 
	b += 1; 
	
	while(true){
		
		map[a][b] = 1; // ���� �ִ� ��ġ �� ������ ���� 
		
		if(map[a-1][b] + map[a+1][b] + map[a][b-1] + map[a][b+1] == 4) break; // ������� ��� ���� �� �Ǵ� �ٴ����� Ȯ�� 
		
		int nextA = a + leftA[d]; // ���� �ٶ󺸰� �ִ� ������ ���� �ε��� ��� 
		int nextB = b + leftB[d];
		
		if(map[nextA][nextB] == 0){
			a = nextA;
			b = nextB;
			result += 1;
		}
		else{
			d = ((d-1) < 0) ? 3 : d-1;
		}
		
	}
	
	printf("%d", result);
	
	return 0;
}
