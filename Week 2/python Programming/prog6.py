def add_polynomials(poly1, poly2):
    # Make both lists the same length by padding with zeros
    max_len = max(len(poly1), len(poly2))
    poly1 += [0] * (max_len - len(poly1))
    poly2 += [0] * (max_len - len(poly2))

    # Add coefficients
    result = [poly1[i] + poly2[i] for i in range(max_len)]
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
poly1 = [3, 0, 5]       # 3 + 0x + 5x^2
poly2 = [6, 1, 0, 2]    # 6 + 1x + 0x^2 + 2x^3

result = add_polynomials(poly1, poly2)
print_polynomial(result)
