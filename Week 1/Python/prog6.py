arr = [1, 2, 3, 4, 5]

is_sorted = all(arr[i] <= arr[i+1] for i in range(len(arr)-1))

if is_sorted:
    print("Array is sorted in ascending order.")
else:
    print("Array is NOT sorted in ascending order.")
