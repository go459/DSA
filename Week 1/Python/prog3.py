arr = [10, 4, 8, 15, 7, 15]

unique_arr = list(set(arr))  # remove duplicates
unique_arr.sort()

if len(unique_arr) < 2:
    print("No second largest element")
else:
    print("Second largest element:", unique_arr[-2])
