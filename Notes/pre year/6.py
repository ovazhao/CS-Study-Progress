# -*- coding: utf-8 -*-
"""
Created on Sat May 16 13:27:04 2026

@author: scymz10
"""

def lin_search(lst,key):
    is_found=False
    for i in lst:
        if i == key:
            is_found=True
            break
    return is_found
    
if __name__=="__main__":
    #test case
    #test 1
    import random
    lst1=[1,2,3,4,5,6,7]
    key1= random.randint(1,10)
    print(lin_search(lst1, key1))
#%%Homework 6
def is_even(n):
    is_even=False
    if n % 2==0:
        is_even=True
    return is_even
if __name__=="__main__":
    
#test
    import random
    n = random.randint(0,10)
    print(n,is_even(n))
    
#%%
import math
def triangle_search(a,b,c):
    p=0.5*(a+b+c)
    area=math.sqrt(p*(p-a)*(p-b)*(p-c))
    if ((a+b)>c )& ((b+c)>a) &( (a+c)>b):
        return area
    else:
        return -1   
if __name__=="__main__":
    #test
    print(triangle_search(3, 3, 3))
#%%
def int_sum(st,ed):
    intsum = 0 
    ed=ed+1
    for i in range(st,ed,1):
        intsum+=i
    return intsum
#test
print(int_sum(1,4))
#%%
def max_of_two(a2,b2):
    return a2 if a2>b2 else b2
def max_of_three(a1,b1,c1):
    return max_of_two(a1, max_of_two(b1,c1))

#test
a3=random.randint(1,10)
b3=random.randint(1,10)
c3=random.randint(1,10)
print(max_of_three(a3,b3,c3))
#%%
def int_reverse(num):
    num=str(num)
    num_lst=[]
    for n in num:
        if n=="0":
            continue
        else:
            num_lst.append(n)
    num_lst.reverse()
    num_fin="".join(num_lst)
    return num_fin
#test        
print(int_reverse(1230025))























