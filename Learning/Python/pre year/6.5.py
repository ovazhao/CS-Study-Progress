import math
#convert degree to radian
def convert_rad(theta):
    return theta*math.pi/180

def projectile_motion(v0, theta, t, y0=0, g=-9.8):
    x = v0*math.cos(convert_rad(theta))*t
    y = y0+v0*math.sin(convert_rad(theta))*t+0.5*g*t**2
    return x,y
v0=20
theta=45
t=2
print(f"the x displacement is {projectile_motion(v0, theta, t, y0=0, g=-9.8)[0]:.2f}, the y dispalcement is {projectile_motion(v0, theta, t, y0=0, g=-9.8)[1]:.2f}")