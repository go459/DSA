arr = [1, 2, 2, 3, 1, 4, 2]

freq = {}

for elem in arr:
    freq[elem] = freq.get(elem, 0) + 1

for key, count in freq.items():
    print(f"Element {key} occurs {count} times")
