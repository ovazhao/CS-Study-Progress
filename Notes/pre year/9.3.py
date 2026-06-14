import matplotlib.pyplot as plt
import math
import numpy as np
x=np.random.rand(50)
y=np.random.rand(50)
plt.scatter(x,y,marker='o',alpha=.5)
plt.xlabel('random number')
plt.title('scatter plot')
plt.show()