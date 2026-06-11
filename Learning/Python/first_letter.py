def acronym_generator(string):
    words = string.split()
    first_letter = []
    for word in words:
        first_letter.append(word[0])
    return first_letter

string = input("give me a phrase.")
joined_word = "".join(acronym_generator(string))
print(joined_word.upper())