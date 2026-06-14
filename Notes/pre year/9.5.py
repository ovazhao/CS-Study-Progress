import numpy as np
import matplotlib.pyplot as plt
from numpy.polynomial import Polynomial
x8=np.linspace(-np.pi/4,np.pi/4,1000)
y8=(np.cos(x8))**(-2)
y1=2*np.ones(len(x8))
#plt.plot(x8,y8,label=r'$y=\sec^{2} x$')
#plt.plot(x8,y1,color='green')
xticks=[-np.pi/4,0,np.pi/4]
xticks_label=[r'$-\frac{\pi}{4}$','0',r'$\frac{\pi}{4}$']
#plt.xlim([-np.pi/4,np.pi/4])
#plt.xticks(xticks,xticks_label)
#plt.legend()





x2=10*np.random.rand(15)
y2=2*x2+3+np.random.randn(15)
fit=Polynomial.fit(x2,y2,1)
clean_fit=fit.convert()

plt.scatter(x2,y2,marker="o",color='green')
plt.plot(x2,clean_fit(x2),color='blue')
plt.show()