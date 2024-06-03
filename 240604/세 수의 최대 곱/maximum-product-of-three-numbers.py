import sys
n = int(input())
nums = list(map(int, sys.stdin.readline().split()))

nums.sort()
temp = 1
temp2 = 1
# 양수 3개 곱하기
for i in range(1, 4):
    temp *= nums[-i]

# 음수 2개 양수 1개 곱하기
for i in range(2):
    temp2 *= nums[i]
temp2 *= nums[-1]

# 두 값을 비교하기
print(max(temp, temp2))