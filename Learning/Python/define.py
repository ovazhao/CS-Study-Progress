#define new function use def 
def hello():
  print("Hello")

#define the function with a parameter
def Hi(to):
  print("Hello,", to)

name = input("What's your name?")
#passing the input name variable as an argument and get passed into the function Hi
Hi(name)

#give the parameter a default value
def Hi(to="world"):
  print("Hi,", to)
#calling the function:if there's nothing in (),then the program will print Hi, world
Hi()

