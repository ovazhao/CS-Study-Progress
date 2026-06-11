def remove_duplicate(lst):
    new_lst = []
    for i in lst:
        if not i in new_lst:
            new_lst.append(i)
    return new_lst

item = [1,3,5,2,4,3,5,6,2,3,4,5]
print(remove_duplicate(item))