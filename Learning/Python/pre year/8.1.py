import numpy as np
from numpy.polynomial import Polynomial
import matplotlib.pyplot as plt
F=Polynomial([5,-2,3])
G=Polynomial([9,0,-2,4,0,7])
ans1=F*G
der3=G.deriv(3)
ans2=der3(2)
integG=G.integ()
integF=F.integ()
ans4=integG(1)-integG(0)
print(ans1,ans2,integF,ans4,sep='\n')


x=[0,1,2,3]
y=[2,14,64,182]
fit=Polynomial.fit(x,y,3)
clean_fit=fit.convert()
print("g(x) = ",clean_fit)

G=Polynomial([9,0,-2,4,0,7])
def bisection(a,b,tolrence_error):
    
    while True:
        if abs(b-a)<tolrence_error:
            break
        else:
            mid=(a+b)*0.5
            if G(mid)==0:
                return mid
            elif G(a)*G(mid)<0:
                b=mid
            else:
                a=mid
    return mid

print(bisection(-1,0,1e-3))
print()