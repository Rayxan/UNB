import random
import math
R = list(range(0, 22))
G = list(range(0, 22))
B = list(range(0, 22))
Rf = list(range(0, 20))
Gf = list(range(0, 20))
Bf = list(range(0, 20))
Dist = list(range(0, 20))
media = 0

R.insert(0, 0)
R.insert(21, 0)
G.insert(0, 0)
G.insert(21, 0)
B.insert(0, 0)
B.insert(21, 0)
random.seed()
for i in range(1, 20):
    R[i] = random.randint(0, 255)
    G[i] = random.randint(0, 255)
    B[i] = random.randint(0, 255)
    i+1

for i in range(0,20):
    Rf[i] = (R[i]+R[i+1]+R[i+2])/3   
    Gf[i] = (G[i]+G[i+1]+G[i+2])/3
    Bf[i] = (B[i]+B[i+1]+B[i+2])/3

for i in range(0,20):
    print('Rf[{}] = {:.2f}\n'.format(i, Rf[i]))    

print('---------------')
for i in range(0,20):
    print('Gf[{}] = {:.2f}\n'.format(i, Gf[i]))    

print('---------------')
for i in range(0,20):
    print('Bf[{}] = {:.2f}\n'.format(i, Bf[i])) 

for i in range(0,20):
    Dist[i] = math.sqrt(pow((R[i]-Rf[i]),2)+ pow((G[i]-Gf[i]),2)+ pow((B[i]-Bf[i]),2))

#print('---------------')
#for i in range(0,20):
#   print('Distancia = {:.2f}'.format(Dist[i]))

for i in range(0,20):
    media += Dist[i]

media = media/20
print('---------------')
print('A distancia euclidiana media entre os 2 vetores eh: {:.2f}'.format(media))