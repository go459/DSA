def transpose(matrix):
    # Use zip(*) to transpose rows and columns
    transposed = list(map(list, zip(*matrix)))
    return transposed

# Example:
matrix = [
    [1, 2, 3],
    [4, 5, 6]
]

transposed_matrix = transpose(matrix)
for row in transposed_matrix:
    print(row)
