def multiply_polynomials(poly1, poly2):
    result_len = len(poly1) + len(poly2) - 1
    result = [0] * result_len

    for i in range(len(poly1)):
        for j in range(len(poly2)):
            result[i + j] += poly1[i] * poly2[j]

    return result

def print_polynomial(poly):
    terms = []
    for power, coeff in enumerate(poly):
        if coeff != 0:
            if power == 0:
                terms.append(str(coeff))
            elif power == 1:
                terms.append(f"{coeff}x")
            else:
                terms.append(f"{coeff}x^{power}")
    print(" + ".join(terms[::-1]) or "0")

# Example:
poly1 = [1, 2, 1]  # 1 + 2x + x^2
poly2 = [1, 1]     # 1 + x

result = multiply_polynomials(poly1, poly2)
print_polynomial(result)
