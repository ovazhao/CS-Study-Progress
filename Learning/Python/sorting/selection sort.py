#foundthesmallestone
def find_index(n,lst):
    count=0
    for s in lst:
        if s != n:
            count+=1
        else:
            break
    return count


def find_smallest(lst):
    small=lst[0]
    for n in lst:
        if n<=small:
            small=n
    return find_index(small,lst)

def selection_sort(lst):
    for i in range(len(lst)-1):
        start=i+1
        smallest=find_smallest(lst[start:])
        index=find_index(smallest,lst[start:])
        
        if smallest<=lst[i]:
            lst[i+1+index],lst[i]=lst[i],lst[i+1+index]
    return lst

print(selection_sort([2,4,4,5,3,5]))


