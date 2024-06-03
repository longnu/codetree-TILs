import sys

INT_MIN = -sys.maxsize

# 변수 선언 및 입력:
n = int(input())
arr = [INT_MIN] + list(map(int, input().split()))

ans = 0
negative, zero, positive = 0, 0, 0

arr.sort()
for i in range(1, n + 1):
    if arr[i] < 0: 
        negative += 1
    if arr[i] == 0: 
        zero += 1
    if arr[i] > 0: 
        positive += 1

# 곱 중 양수가 존재할 때
# 양수 3개의 곱이나, 양수 1개와 음수 2개의 곱이 만들어져야 가능합니다.
if positive >= 3 or (positive >= 1 and negative >= 2):
    # 양수가 3개 이상이라면, 그 중 가장 큰 3개의 수를 곱하는 것이 최선입니다.
    if positive >= 3:
        ans = max(ans, arr[n] * arr[n - 1] * arr[n - 2])
    # 음수 2개와 양수 1개를 곱할 때에는, 음수 2개는 절댓값이 가장 큰 값을, (즉, 가장 작은 두 값)
    # 양수 1개는 가장 큰 값을 골라 곱하는 것이 최선입니다.
    if positive >= 1 and negative >= 2:
        ans = max(ans, arr[n] * arr[2] * arr[1])
# 곱 중 0이 존재할 때
elif zero >= 1:
    ans = 0
# 곱 중 음수만 존재할 때
# 배열에 -밖에 없거나 (negative = 1, zero = 0, positive = 2)인 경우
# 이 경우 가장 절댓값이 작은 값 3개를 고르는 것이 최선입니다.
else:
    ans = arr[n] * arr[n - 1] * arr[n - 2]

print(ans)