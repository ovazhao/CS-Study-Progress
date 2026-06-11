def bubble_sort(lst):
    n = len(lst)
    for i in range(n - 1):                    # 轮数 1 2
        swapped = False
        for j in range(n - 1 - i):           # 每轮比较相邻元素  4 3
            if lst[j] > lst[j + 1]:
                lst[j], lst[j + 1] = lst[j + 1], lst[j]  # 直接交换
                swapped = True
        if not swapped:                       # 没有交换 → 已有序
            break
    return lst

import numpy as np
#tests

if __name__=="__main__":
    #t1
    L1 = []
    L2 = [2]
    L3 = [2, 0, 2, 6, 0, 5, 0, 7]
    L4 = [np.random.randint(50,100) for _ in range(10)]
    print(bubble_sort(L4))

