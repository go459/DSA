def rotate_90_clockwise(matrix):
    # Transpose the matrix
    transposed = list(zip(*matrix))
    # Reverse each row in the transposed matrix
    rotated = [list(row)[::-1] for row in transposed]
    return rotated

# Example usage:
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

rotated_matrix = rotate_90_clockwise(matrix)
for row in rotated_matrix:
    print(row)
