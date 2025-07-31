n, k = map(int, input().split())
words = input().split()
new_words = []
for i in range(n):
    if len(words[i]) >= k:
        new_words.append(words[i])
print(*new_words)