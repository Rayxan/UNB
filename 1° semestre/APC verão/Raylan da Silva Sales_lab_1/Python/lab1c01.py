e=0.0001
x1 = 0
x2 = 2
calc = pow(x1,3)-1
calc1 = pow(x2,3)-x2-1
if calc>calc1:
    print('decrescente')
else:
    print('crescente')
y=1
while (y > e or y < -e):
    x = (x1+x2)/2
    y = pow(x, 3)-x-1
    if y > e:
        x2 = x
    elif y < -e:
        x1 = x
print('Letra a: {:.4f}'.format(x))
print('=====================================')

x1 = 0.1
x2 = 1
import math
calc = x1 + math.log(x1)
calc1 = x2 + math.log(x2)
if calc > calc1:
    print('decrescente')
else:
    print('crescente')
y = 1
while(y > e or y < -e):
    x = (x1 + x2) / 2

    y = x + math.log(x)
    if y > e:
        x2 = x
    elif y < -e:
        x1=x
print('Letra b: {:.4f}'.format(x))
print('=============================================')

e=0.0001
x1 = 0
x2 = 2
import math
calc = 5*math.sin(x1)-5+x1
calc1 = 5*math.sin(x2)-5+x2
if calc>calc1:
    print('decrescente')
else:
    print('crescente')
y=1
while (y > e or y < -e):
    x = (x1+x2)/2
    y = 5*math.sin(x)-5+x
    if y > e:
        x2 = x
    elif y < -e:
        x1 = x
print('Letra c: {:.4f}'.format(x))
print('=====================================')

e=0.0001
x1 = 0
x2 = 2
calc = pow(x1,3)-3*x1-2
calc1 = pow(x2,3)-3*x2-2
if calc>calc1:
    print('decrescente')
else:
    print('crescente')
y=1
while (y > e or y < -e):
    x = (x1+x2)/2
    y = pow(x,3)-3*x-2
    if y > e:
        x2 = x
    elif y < -e:
        x1 = x
print('Letra d: {:.0f}'.format(x))
print('=====================================')

e=0.0001
x1 = -1.5
x2 = -0.5
calc = pow(x1, 3)-2*pow(x1, 2)-13*x1-10
calc1 = pow(x2, 3)-2*pow(x2, 2)-13*x2-10
if calc>calc1:
    print('decrescente')
else:
    print('crescente')
y=1
while (y > e or y < -e):
    x = (x1+x2)/2
    y = pow(x, 3)-2*pow(x, 2)-13*x-10
    if y > e:
        x2 = x
    elif y < -e:
        x1 = x
print('Letra e: {:.0f}'.format(x))
print('=====================================')