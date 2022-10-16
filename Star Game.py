#pip install matplotlib
#pip install pyqt5

import matplotlib.pyplot as plt
import numpy as np
import random

level = 1
lives = 3
a = 0
b = 0
c = 0
d = 0
e = []
f = []
for i in range(0, level-1):
    e.append(0)
    f.append(0)
min = 0
max = 5
move = ""

def layer():
    x = np.array([min,max])
    y = np.array([min,max])
    plt.plot(x,y, ls = "")

def player(a,b):
    x = np.array([a])
    y = np.array([b])
    plt.plot(x, y, marker="o", ms=20, color="blue")

def star():
    x = np.array([c])
    y = np.array([d])
    plt.plot(x, y, marker="*", ms=20, color="gold")

def obstacle_rand(e,f):
    e = random.randint(min, max)
    f = random.randint(min, max)
    while ((e == a and f == b) or (e == c and f == d)):
        e = random.randint(min, max)
        f = random.randint(min, max)
    return e,f

def obstacle(e,f):
    x = np.array([e])
    y = np.array([f])
    plt.plot(x, y, marker="X", ms=20, color="red")

def reset(a,b,c,d):
    a = random.randint(min,max)
    b = random.randint(min,max)
    c = a
    d = b
    while (c == a and d == b):
        c = random.randint(min,max)
        d = random.randint(min,max)
    return a,b,c,d

def movement(move,a,b):
    hit = 0
    for i in range(0, len(move)):
        if hit == 1:
            break
        if a == c and b == d:
            break
        if move[i] == "W":
            b += 1
        if move[i] == "S":
            b -= 1
        if move[i] == "A":
            a -= 1
        if move[i] == "D":
            a += 1
        for i in range(0, level-1):
            if a == e[i] and b == f[i]:
                hit = 1
                break
        if a < min:
            print("Wyszedłeś poza obszar!")
            a += 1
            break
        if a > max:
            print("Wyszedłeś poza obszar!")
            a -= 1
            break
        if b < min:
            print("Wyszedłeś poza obszar!")
            b += 1
            break
        if b > max:
            print("Wyszedłeś poza obszar!")
            b -= 1
            break
    return a,b

def render(a,b):
    layer()
    player(a,b)
    star()
    for i in range(0, level - 1):
        obstacle(e[i], f[i])
    plt.grid()
    font1 = {'color': 'blue', 'size': 20}
    font2 = {'color': 'red', 'size': 15}
    plt.title("LEVEL " + str(level), fontdict=font1)
    plt.xlabel("LIVES:"+str(lives), fontdict=font2)
    plt.show()

while(level < 50 and lives != 0):
    if level % 5 == 0:
        max += 5
    a,b,c,d = reset(a,b,c,d)
    for i in range(0, level - 1):
        e[i], f[i] = obstacle_rand(e, f)
        obstacle(e[i], f[i])
    render(a,b)

    while ((a != c or b != d) and lives != 0):
        move = input("W = w górę, S = w dół, A = w lewo, D = w prawo: ")
        move = move.upper()
        a, b = movement(move, a, b)
        for i in range(0, level-1):
            if a == e[i] and b == f[i]:
                print("Uderzyłeś w przeszkodę!")
                lives -= 1
        render(a,b)
    level += 1
    e.append(0)
    f.append(0)
    if lives == 0:
        print("Koniec gry :(")
    else:
        print("Gratulacje!")
if lives != 0:
    print("Gratulacje, ukończyłeś grę!")