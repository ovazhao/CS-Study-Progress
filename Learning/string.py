#variable
name = input("What is your name? ")

#how to print
print("Hello,", name)

#functions(because it has () behind) that come with the strings
#remove the white space from str and capitalize the first letter
name = name.strip().capitalize()
#capitalize the first letter of every word
name = name.title()
#split the string: indicating that I want to split on that character
first, last = name.split(" ")

#named parameters: seperate and end, by default it's sep="", end="\n" new line
print("Hello, ", end="")
print(first)
#use + to seperate
print("Hello, " + name)
#use , in between two seperate argument to print

#add quotation marks within the quotation marks
#1.you can use single quote
print("Hello, 'friend'")
#2.you can use \ to specify the ""
print("Hello, \"friend\"")
#format string, use f to tell python that it is a special string
print(f"Hello, {name}")
