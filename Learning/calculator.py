
def main():
    x = int(input("What's x?"))
    print("x square is", square(x))

#return the result
def square(n):
    return n * n
#calling the function
main()


#the users'input is always a text, that is, a string even if they type in numbers
x = input("What's x?")
y = input("What's y?")
#function: int. To convert one type of data to another type of data
print(int(x) + int (y))
#nest function
x = int(input("What's x?"))
y = int(input("What's y?"))

#float: a number that has a decimal point
x = float(input("What's x?"))

#round(number[, ndigits]) you can choose to round how many digits
z = round(x + y , 2)
