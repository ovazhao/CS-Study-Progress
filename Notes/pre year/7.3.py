def list_flattening(lst):
    new=[]
    for l in lst:
        if type(l)==int:
            new.append(l)
        else:
            for value in l:
                new.append(value)
    return new
lst1=[1, 2, [3, 4], [5]]
lst2=[[1], [2], [3, 4, 5]]
print(list_flattening(lst1))
print(list_flattening(lst2))

def list_prod(lst):
    copylist=lst.copy()
    prod=[]
    
    for i in range(len(lst)):
        helper=1
        copylist=lst.copy()
        copylist[i]=1
        for num in copylist:
            helper*=num
        prod.append(helper)
    return prod

print(list_prod([2, 3, 5]))

import numpy as np
def is_prime(n):
    helper=True
    if n<=1:
        helper= False
    else:
        for i in range(2,int(np.sqrt(n))+1):
            if n%i ==0:
                helper=False
        return helper

def prime_numbers(n):
    old_tuple=()
    for i in range(n+1):
        if is_prime(i):
            new_tuple=old_tuple+(i,)
            old_tuple=new_tuple
    return old_tuple

print(prime_numbers(23))