def acronym_generator(str):
    new_lst=[]
    word_lst=str.split(" ")
    for w in word_lst:
        new_lst.append(w[0].upper())
    return "".join(new_lst)
string="computer aodfaf efwu"
print(acronym_generator(string))


import random
def remove_duplicate(lst):
    remove_lst=[]
    for n in lst:
        if n in remove_lst:
            continue
        else:
            remove_lst.append(n)
    return remove_lst

lst=[random.randint(1,10) for _ in range(10)]
print(lst,remove_duplicate(lst))
