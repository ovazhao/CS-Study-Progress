import numpy as np
import matplotlib.pyplot as plt
from numpy.polynomial import Polynomial

Day=['1 May','2 May','3 May','4 May']
high_temp=[23, 24, 24, 25]
low_temp=[7, 11, 14, 15]

plt.scatter(Day,high_temp,color='blue',marker='o')
plt.scatter(Day,low_temp,color='orange',marker='o')
plt.plot(Day,high_temp,color='blue',label='high')
plt.plot(Day,low_temp,color='orange',label='low')
plt.xlabel("UNNC holiday")
plt.ylabel(r"temperature($\circ C$)")
plt.title("Temperature forecast for the May holiday")
plt.legend()
plt.show()