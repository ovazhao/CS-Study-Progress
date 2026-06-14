import numpy as np
import matplotlib.pyplot as plt

categories=['a','b','c','d','e']
values=[3,5,7,8,9]
plt.bar(categories,values,color='blue',edgecolor='black')
plt.xlabel('categories')
plt.title('bar chart')
plt.show()

fruits=['Apple','Banana','Orange','Watermelon']
distribution=[15,20,10,5]
plt.pie(distribution,labels=fruits,autopct='%.1f%%')


x_his=np.random.randn(1000)
plt.hist(x_his,bins=20,color='blue',edgecolor='balck',alpha=0.3)
plt.title("histogram")
plt.show()


intersec_x=[0,1]
intersec_y=[0,1]
x7=np.linspace(-0.5,1.5,1000)
f7=x7**2
g7=x7*2-x7**2
plt.scatter(intersec_x,intersec_y,marker="x",color="red")
plt.plot(x7,f7,color='black',linesyle='--')
plt.plot(x7,g7,color="orange")


