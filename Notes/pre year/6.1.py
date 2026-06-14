#%%
def power_series(N):
    k=0
    power_sum=0
    while True:
        
        power_sum+=2**k
        k+=1 
        if power_sum>=N:
            return k-1

#test
print(power_series(2026))

