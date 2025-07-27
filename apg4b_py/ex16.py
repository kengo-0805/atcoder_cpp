n, k = (int(x) for x in input().split())
s = input().split()
# iの文字数がk以上の場合リストに入れる
ans = (str(i) for i in s if len(i)>k)
print(*ans)
