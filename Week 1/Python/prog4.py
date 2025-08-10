arr = [0, 3, 0, 4, 5, 0, 1]

count = 0  # Count of non-zero elements

for i in range(len(arr)):
    if arr[i] != 0:
        arr[count] = arr[i]
        count += 1

# Fill remaining positions with 0
while count < len(arr):
    arr[count] = 0
    count += 1

print(arr)
