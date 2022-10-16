import random
import statistics

def show_table(table):
    k = 0
    for i in range(3):
        print()
        for q in range(3):
            k += 1
            if table[i][q] == 0:
                print(k, end=" ")
            else:
                print(str(table[i][q]), end=" ")
    print()

def move(space, tag, table):
    if check_occupied(space, table):
        print()
        print("This space is occupied! Choose again.")
        return
    if space == 1:
        table[0][0] = tag
    if space == 2:
        table[0][1] = tag
    if space == 3:
        table[0][2] = tag
    if space == 4:
        table[1][0] = tag
    if space == 5:
        table[1][1] = tag
    if space == 6:
        table[1][2] = tag
    if space == 7:
        table[2][0] = tag
    if space == 8:
        table[2][1] = tag
    if space == 9:
        table[2][2] = tag
    show_table(table)

def check_occupied(space, table):
    if space == 1:
        if table[0][0] != 0:
            return 1
    if space == 2:
        if table[0][1] != 0:
            return 1
    if space == 3:
        if table[0][2] != 0:
            return 1
    if space == 4:
        if table[1][0] != 0:
            return 1
    if space == 5:
        if table[1][1] != 0:
            return 1
    if space == 6:
        if table[1][2] != 0:
            return 1
    if space == 7:
        if table[2][0] != 0:
            return 1
    if space == 8:
        if table[2][1] != 0:
            return 1
    if space == 9:
        if table[2][2] != 0:
            return 1
    return 0

def check_win(table):
    if table[0][0] == table[0][1] == table[0][2]:
        return table[0][0]
    if table[1][0] == table[1][1] == table[1][2]:
        return table[1][0]
    if table[2][0] == table[2][1] == table[2][2]:
        return table[2][0]
    if table[0][0] == table[1][0] == table[2][0]:
        return table[0][0]
    if table[0][1] == table[1][1] == table[2][1]:
        return table[0][1]
    if table[0][2] == table[1][2] == table[2][2]:
        return table[0][2]
    if table[0][0] == table[1][1] == table[2][2]:
        return table[0][0]
    if table[0][2] == table[1][1] == table[2][0]:
        return table[0][2]
    return 0

def bot(sequence):
    space = random.randint(1, 9)
    while check_occupied(space, table):
        space = random.randint(1,9)
    next_move = []
    for i in range(len(records)):
        if len(sequence) % 2:
            if records[i][0:len(sequence)] == sequence and records[i][-1] == "2":
                next_move.append(int(records[i][len(sequence)]))
        else:
            if records[i][0:len(sequence)] == sequence and records[i][-1] == "1":
                next_move.append(int(records[i][len(sequence)]))
    try:
        space = statistics.mode(next_move)
    except statistics.StatisticsError:
        while check_occupied(space, table):
            space = random.randint(1, 9)
    return space

def bot_random():
    space = random.randint(1, 9)
    while check_occupied(space, table):
        space = random.randint(1, 9)
    return space

def check_record(sequence, records):
    for i in range(len(records)):
        if records[i] == sequence:
            return 0
    return 1


mode = 5
if mode == 1 or mode == 2:
    n = 1
elif mode == 5:
    n = 10
    n_counter = 1
else:
    n = 10

for _ in range(n):
    file = open("register.txt", "r")
    records = file.readlines()
    for i in range(len(records)):
        records[i] = records[i].strip()

    table = [[0,0,0],[0,0,0],[0,0,0]]
    sequence = ""
    turn = 0
    show_table(table)
    while check_win(table) == 0:
        if turn == 9:
            break
        if turn % 2 == 0:
            tag = "@"
            if mode == 1 or (mode == 5 and n_counter % 2 == 1):
                space = int(input("\nChoose your space: "))
                while check_occupied(space, table):
                    space = int(input("\nChoose your space: "))
            if mode == 0 or mode == 2 or (mode == 5 and n_counter % 2 == 0):
                space = bot(sequence)
            if mode == 3 or mode == 4:
                space = bot_random()
        else:
            tag = "#"
            if mode == 2 or (mode == 5 and n_counter % 2 == 0):
                space = int(input("\nChoose your space: "))
                while check_occupied(space, table):
                    space = int(input("\nChoose your space: "))
            if mode == 0 or mode == 1 or mode == 4 or (mode == 5 and n_counter % 2 == 1):
                space = bot(sequence)
            if mode == 3:
                space = bot_random()
        move(space, tag, table)
        sequence += str(space)
        turn += 1
    if check_win(table) != 0:
        print()
        print(str(check_win(table)) + " is the winner!")
    else:
        print()
        print("Tie!")

    if mode == 5:
        n_counter += 1

    winner = 0
    if check_win(table) == "@":
        winner = 1
    elif check_win(table) == "#":
        winner = 2
    sequence += " " + str(winner)

    file = open("register.txt", "a")
    if check_record(sequence, records):
        file.write("\n" + sequence)
    file.close()