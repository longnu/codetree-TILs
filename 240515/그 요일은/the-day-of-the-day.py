m1, d1, m2, d2 = list(map(int, input().split()))
A = input()

days = [31, 29, 31, 30, 31, 30, 31, 31,30,31,30,31]
day = ['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat', 'Sun']

def calculate_date(m, d):
    sum = 0
    for i in range(0, m-1):
        sum += days[i]
    sum += d
    return sum
        


def how_many_day(d, w):
    ans = 0
    ans += d//7
    for i in range(1, d%7+1):
        if day[i] == w:
            ans += 1
    return ans
    

# 월요일 
print(how_many_day((calculate_date(m2,d2) - calculate_date(m1, d1)), A))