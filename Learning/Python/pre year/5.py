#calculates income tax
income = int(input("put in the income: "))
tax = 0
if income <=10000:
    tax = 0
else:
    tax *= 0
    income -= 10000
    if income <= 20000:
        tax += 0.1 * income
    else:
        tax +=0.1 *20000
        income -=20000
        if income <= 20000:
            tax += 0.2 * income
        else:
            tax +=0.2 * income
            income -= 20000
            tax += 0.3 * income

print(tax)

#digit inverse
def digit_inverse():
    integer = int(input("give me one number"))
    bit=[]
    while integer > 0:
        bit.append(integer % 10)
        integer =integer // 10

    return "".join(str(n) for n in bit)


#binary to decimal converter
binary = input("input a string of 1s and 0s: ")
count = 0
num_list=[]
decml = 0
for num in binary:
    num_list.append(num)
num_list.reverse()

for b in num_list:
    decml += int(b)*(2**count)
    count +=1

print(decml)

#find the greatest common divisor
def greater_first(a,b):
    if a>b:
        return a,b 
    else:
        return b,a
    
a,b = map(int,input("请输入两个数字：").split(" "))
a,b = greater_first(a,b)

while True:
    r = a % b
    if r == 0:
        break
    else:
        a = b
        b = r

print(b)

#try again

while True:
    print(digit_inverse())
    Ans = input("Try again? [Y/N]")
    if Ans.upper() == "N":
        print("Goodbye!")
        break


#the chessboard pattern
for r in range(8):
    for c in range(8):
        if (r+c)%2 == 0:
            print("@",end="")
        else:
            print("#",end="")
    print()

#calculate row*col
size = int(input("the size you want: "))
for row in range(1,size):
    for col in range(1,size):
        print(row*col,end="")
    print()

#product graph
graph_size = 9
