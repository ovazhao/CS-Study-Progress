import numpy as np
from numpy.polynomial import Polynomial
a=np.array([-1.5,0,1.2])
print(a.shape)

b=np.arange(2,25,2)
print(b.reshape(3,4))

c=np.arange(1,10)
c[c>5]

d=np.array([[1,2],[3,4]])
e=np.array([[5,6],[7,8]])
dT=np.transpose(d)
eT=e.T
product=d@e
det=np.linalg.det(d)
inv=np.linalg.inv(e)

f=np.array([[1,2,4],[2,7,0],[-3,3,-1]])
g=np.array([-4,61,10])
solution=np.linalg.solve(f,g)

p=Polynomial([4,3,2])
p(2)
p.deriv()