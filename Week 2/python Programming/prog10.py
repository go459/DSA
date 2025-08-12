def count_zeros(matrix):
    zero_count = 0
    for row in matrix:
        zero_count += row.count(0)
    return zero_count

# Example:
matrix = [
    [1, 0, 3],
    [0, 0, 6],
    [7, 8, 0]
]

print("Number of zeros in the matrix:", count_zeros(matrix))
