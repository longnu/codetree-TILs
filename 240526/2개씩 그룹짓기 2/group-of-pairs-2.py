import sys

INT_MAX = sys.maxsize

# 변수 선언 및 입력:
n = int(input())
arr = [0] + list(map(int, input().split()))
ans = INT_MAX

arr.sort()

# 정렬한 뒤 1번째 값과 n + 1번째 값, 2번째 값과 n + 2번째 값, ... n번째 값과 2n번째 값의
# 차이를 구합니다. 구한 값들의 최솟값을 찾습니다.
for i in range(1, n + 1):
    ans = min(ans, arr[n + i] - arr[i])

print(ans)