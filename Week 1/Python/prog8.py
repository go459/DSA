s = "Madam"
s_lower = s.lower()  # convert to lowercase for case-insensitive check

if s_lower == s_lower[::-1]:
    print("The string is a palindrome.")
else:
    print("The string is NOT a palindrome.")
