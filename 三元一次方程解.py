from sympy import*

count=0
while count < 200000:

  x=Symbol('x')
  y=Symbol('y')
  z=Symbol('z')

  A=input('输入方程A： ')
  B=input('输入方程B： ')
  Z=input('输入方程Z： ')
  
  print(solve([A,B,C],[x,y,z]))

  C=input('摁Enter下一道') 
  count=count+1
