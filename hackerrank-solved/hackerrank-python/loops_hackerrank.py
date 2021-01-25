# Problem Statement: https://www.hackerrank.com/challenges/python-loops/problem

if __name__ == '__main__':
    n = int(input())

    if(1<=n<=20):
        for n in range(n):
            print(n*n)
