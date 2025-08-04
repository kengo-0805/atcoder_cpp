data = [int(c) for c in input().split()]
# dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
# ここにプログラムを追記

flag = False
for i in range(len(data)-1):
    if data[i+1] == data[i]:
        flag = True

if flag:
    print("YES")
else:
    print("NO")