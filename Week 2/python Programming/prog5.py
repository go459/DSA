def is_sparse(matrix):
    rows = len(matrix)
    cols = len(matrix[0]) if rows > 0 else 0

    zero_count = 0
    total_elements = rows * cols

    for row in matrix:
        zero_count += row.count(0)

    return zero_count > total_elements / 2

# Example:
matrix = [
    [0, 0, 3],
    [0, 0, 6],
    [7, 8, 0]
]

if is_sparse(matrix):
    print("The matrix is sparse.")
else:
    print("The matrix is not sparse.")
