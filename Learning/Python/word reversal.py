def word_reversal(sentence):
    words =  sentence.split()
    new_list = []
    for i in words:
        i = i[::-1]
        new_list.append(i)
    return new_list

sentence = input("Enter a sentence: ")
print(' '.join(word_reversal(sentence)))
