N = int(input())
people = [
    ord(ele) - ord('A') for ele in input().split()
]

count = 0
# 길이가 1이면 움직일 필요 없음
if len(people) == 1:
    print(0)
# 둘 이상일 때
else:
    # 각 위치에 올바로 서있지 않으면 올바른 위치로 옮겨줌
    for i in range(N):
        order_index = people.index(i)
        temp = people[order_index]
        # order_index가 서있는 위치가 있어야 할 위치(i)보다 뒤에 있는 경우
        if order_index > i:
            for j in range(order_index, i, -1):
                people[j] = people[j-1]
            people[i] = temp
            count += abs(order_index - i)
        # order_index가 서있는 위치가 있어야 할 위치(i)보다 앞에 있는 경우
        elif order_index < i:
            for j in range(order_index, i-1):
                people[j+1] = people[j]
            people[i] = temp
            count += abs(order_index - i)

print(count)