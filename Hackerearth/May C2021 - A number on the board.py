# cook your dish here
#Romit Choudhary Code

from math import log

x,y,z=input().split()

x=float(x)
y=int(y)
z=int(z)



if(z<=1 and z>=0):
	cnt=log(1+y*x,2)
elif(x>y):
    cnt=z*log(x,2)
elif(x>y):
     r=(1+y-x)/(y*(x-1))
     r=int(r)+1;
     cnt=log(1+r*y,2)+(z-r)*log(x,2)
 print(cnt)	
