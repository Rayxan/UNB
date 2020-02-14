A = 90000000
B = 200000000
anos = 0
while A<B:
    A = A*1.03
    B = B*1.015
    anos+=1
else:
    print('Levara {} anos'.format(anos))