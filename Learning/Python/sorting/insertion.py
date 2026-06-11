def insertion(lst):
    sorted=[]
    for n in lst:
        if len(sorted)==0:
            sorted.append(n)
        else:
            count=0
            for s in sorted:
                if s<n:
                    count+=1
                else:
                    #痛点：怎么把每个数都往后移一位
                    for r in range(count,len(sorted)):
                        sorted[r+1]=sorted[r]
                    sorted[count]=n
            sorted.append(n)
    return sorted
print(insertion([2,4,1,7,8,4,5,3,5]))



def insertion(lst):
    for i in range(1,len(lst)):
        current=lst[i]
        j=i-1
        while j>=0 and lst[j]>current:
            lst[j+1]=lst[j]
            j-=1
        lst[j+1]=current

    return lst