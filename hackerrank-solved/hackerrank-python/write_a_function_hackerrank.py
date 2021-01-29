# Problem Statement: https://www.hackerrank.com/challenges/write-a-function/problem
def is_leap(year):
    if(1900<=year<=10**5):
        leap = False
        if year % 4 == 0:
            if year % 100 != 0:
                leap = True
            elif year % 400 == 0:
                leap = True
        return leap

year = int(input())
print(is_leap(year))