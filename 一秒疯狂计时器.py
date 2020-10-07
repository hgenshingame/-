import time


con=0
while con<310:
  cTime=time.time()
  tSeconds=int(cTime)
  cSecond=tSeconds%60
  tMinutes=tSeconds//60
  cMinutes=tMinutes%60
  tHours=tMinutes//60
  cHour=tHours%24

  print('现在时间',cHour,cMinutes,cSecond)
  con+=1
input('一秒到')
