def is_palindrome(word):
    reverse = word[::-1]
    
    return reverse == word

print(is_palindrome("madam"))
