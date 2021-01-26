#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	string plans = "";
	int x = 1, y = 1;
	
	// ---------  L  R  U  D ---------
	int dx[4] = {0, 0, -1, 1};
	int dy[4] = {-1, 1, 0, 0};
	char moveType[4]= {'L', 'R', 'U', 'D'};
	
	scanf("%d\n", &n);
	getline(cin, plans); // ���� ���� �� �� �Է� 
	
	for(int i = 0; i < plans.length(); i++){

		if (plans[i] == ' ') continue; // ����� �Ʒ� �ڵ� �������� ����.
		
		char type = plans[i];
		int idx = -1;
		
		for(int j = 0 ; j < 4; j++){
			if(type == moveType[j]){ // ���� Ÿ���� �ε��� ã��. 
				idx = j;
				break;
			}
		}
		
		int nx = x + dx[idx];
		int ny = y + dy[idx];
		
		if(nx < 1 || nx > n || ny < 1 || ny > n) continue; // ��輱 �Ѿ�� ó������ ����. 
		
		x = nx;
		y = ny;
		
	}
	
	printf("%d %d ", x, y);
	
	return 0;
}
