n,m=map(int,input().split())
A=[list(map(int,input().split()))for _ in[0]*n]
b=[int(input())for _ in[0]*m]
print(*[sum(x*y for x,y in zip(a,b))for a in A],sep="\n")
"""
n, m = map(int, input().split())
A, b = [], []
for i in range(n):
    A.append(list(map(int, input().split())))
for j in range(m):
    b.append(int(input()))

c = []
for i in range(n):
    sum = 0
    for j in range(m):
        sum += A[i][j] * b[j]
    c.append(sum)

print("\n".join(map(str, c)))
"""
