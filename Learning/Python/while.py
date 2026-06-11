usr = input()                          # 第1次输入：获取用户的第一个输入
print("You have entered", usr)         # 打印第一个输入

while usr != "begin":                  # 检查当前usr是否为"begin"
    usr = input()                      # 如果当前usr不是"begin"，进入循环，读取下一个输入
    print("You have entered:", usr)    # 打印新输入
    # 然后回到while条件，用这个新usr再次判断

print("The while loop condition has been met.")  # 当usr等于"begin"时，跳出循环，打印结束消息

#为什么要写两次 input()？

#这是一种“先读后判”的经典模式，目的是先处理第一个输入，如果第一个输入已经满足退出条件（"begin"），就不进入循环；否则才进入循环继续读取后续输入。

#第一次 input()：在循环外，用来获取初始输入。
#循环内的 input()：用来获取后续的输入，直到用户输入 "begin"。
#如果只在循环内写 input()，就无法判断第一个输入是否要立即退出；如果只在循环外写 input()，就无法继续读取后面的输入。


#%%
n1 = int(input("Enter an integer: "))
n2 = int(input("Enter another integer: "))

current=n1
total = 0
# TODO: while statement
while current <= n2:
    if current % 2 == 0:
        total += current
    current += 1
print(total)




#write a program that prints all integers n that multiplies 5 is less than 50
n = 0

while n * 5 <= 50:
    print(n)
    n += 1



for i in range(0, n):
    if i * 5 <= 50:
        print(i)
    else 
        

