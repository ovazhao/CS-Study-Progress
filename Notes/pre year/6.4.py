#最小质因数
def minzhiyinshu(N):
    if N % 2 ==0:
        return 2
    else:
        p=3
        while p**2< N:
            if N % p ==0:
                return p
            else:
                p=p+2
        return N
    
print(minzhiyinshu(97))