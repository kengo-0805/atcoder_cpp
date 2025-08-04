n, k = map(int, input().split())
s = input().split()

ans = [word for word in s if len(word) >= k]

print(*ans)