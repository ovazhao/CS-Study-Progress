import matplotlib.pyplot as plt
Course=["Note 7","HW 7","Solution 7","Coursework","Note 8","HW 8","Solution 8"]
views=[17,134,16,16,10,112,5]
plt.bar(Course,views,color='red',alpha=0.3)
plt.xticks(rotation=45)
plt.xlabel("course material")
plt.ylabel("numbers of viewed users")
plt.title("module activity report")
plt.show()