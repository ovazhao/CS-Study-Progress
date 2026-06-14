#reverse word

sentence = input("Give me a sentence: ")
sentence = sentence.split(" ")
new_sen=[]
for w in sentence:
    reverse_word=w[::-1]
    new_sen.append(reverse_word)
a = " ".join(new_sen)
print(a)


