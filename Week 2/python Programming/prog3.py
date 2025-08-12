def sum_of_diagonals(matrix):
    n = len(matrix)
    primary_sum = 0
    secondary_sum = 0

    for i in range(n):
        primary_sum += matrix[i][i]             # Primary diagonal
        secondary_sum += matrix[i][n - i - 1]   # Secondary diagonal

    # If matrix size is odd, subtract the middle element once (counted twice)
    total_sum = primary_sum + secondary_sum
    if n % 2 != 0:
        total_sum -= matrix[n // 2][n // 2]

    return primary_sum, secondary_sum, total_sum

# Example:
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

p_sum, s_sum, t_sum = sum_of_diagonals(matrix)
print(f"Primary diagonal sum = {p_sum}")
print(f"Secondary diagonal sum = {s_sum}")
print(f"Total diagonal sum = {t_sum}")
