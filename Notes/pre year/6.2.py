#%%
def factorial(a):
    fac=1
    if a>0:
        for i in range(1,a+1) :
            fac = fac*i
    else:
        fac=1
    return fac


def factorial_sum(N):
    k=1
    fac_sum=0
    while True:
        if (fac_sum+factorial(k))>=N:
            return k-1
        fac_sum+=factorial(k)
        k+=1

#print(factorial_sum(5))

def fibonacci(n):
    fibo=1
    if n==1:
        fibo=1
    elif n==2:
        fibo=1
    else:
        fibo=fibonacci(n-1)+fibonacci(n-2)
    return fibo

def fibo_sum(N):
    k=1
    fibo_sum=0
    while True:
        if (fibo_sum+fibonacci(k))>=N:
            return k-1

        fibo_sum+=fibonacci(k)
        k+=1

print(fibo_sum(10))