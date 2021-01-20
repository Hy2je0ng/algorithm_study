#3. 숫자카드게임

n, m = list(map(int, input("n과 m 을 입력하시오 : ").split()))

result = 0

for i in range(n):
   data = list(map(int, input("데이터를 입력하시오 : ").split()))

   min_value = min(data)

   result = max(result, min_value)

print(result)