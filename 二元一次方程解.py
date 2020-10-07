from sympy import*

count=0
while count < 2000:

  x=Symbol('x')
  y=Symbol('y')

  A=input('输入方程A： ')
  B=input('输入方程B： ')

  print(solve([A,B],[x,y]))

  C=input('摁Enter下一道') 
  


  count=count+1
