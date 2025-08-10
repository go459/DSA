def reverse_array(arr):
    return arr[::-1]

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().rstrip().split()))
    reversed_arr = reverse_array(arr)
    print(' '.join(map(str, reversed_arr)))
