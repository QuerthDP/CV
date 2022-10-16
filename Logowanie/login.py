import random

n = 4

def register(username, password):
    profiles = open("dane_logowania.txt", "r").readlines()
    used = 0
    for i in range(0, len(profiles)):
        profiles[i] = profiles[i].strip().split(sep=" ")
        if profiles[i][0] == username:
            print("\nPodany użytkownik już istnieje.")
            used = 1
    if used == 0:
        code = generate_code()
        coded_password = password_coding(password, code)
        open("dane_logowania.txt", "a").write("\n" + username + " " + coded_password + " " + str(code))
        for i in range(0,n-3):
            open("dane_logowania.txt", "a").write(" 0")
        print("\nPomyślnie zarejestrowano jako", username+".")

def login(username, password):
    profiles = open("dane_logowania.txt", "r").readlines()
    if profiles == []:
        register(username, password)
        return 0
    for i in range(0, len(profiles)):
        profiles[i] = profiles[i].strip().split(sep=" ")
        if profiles[i][0] == username:
            if profiles[i][1] == password_coding(password, int(profiles[i][2])):
                print("\nWitamy! Pomyślnie zalogowano jako", username+".")
                return 1
            else:
                print("\nNiepoprawne dane logowania.")
                return 0
    print("\nPodany użytkownik nie istnieje.")
    register(username,password)
    return 0

def admin(username):
    profiles = open("dane_logowania.txt", "r").readlines()
    for i in range(0, len(profiles)):
        profiles[i] = profiles[i].strip().split(sep=" ")
        if profiles[i][0] == username:
            if profiles[i][3] == "1":
                print("Zalogowano jako administrator.")
                return 1
    print("Brak uprawnień administratora.")
    return 0

def list():
    print("\nZarejestrowani użytkownicy:")
    profiles = open("dane_logowania.txt", "r").readlines()
    for i in range(0, len(profiles)):
        profiles[i] = profiles[i].strip().split(sep=" ")
        print(profiles[i][0])

def delete_user():
    list()
    username = input("\nPodaj nazwę użytkownika, którego chcesz usunąć: ")
    profiles = open("dane_logowania.txt", "r").readlines()
    for i in range(0, len(profiles)):
        profiles[i] = profiles[i].strip().split(sep=" ")
        if profiles[i][0] == username:
            profiles.pop(i)
            break
    for i in range(0, len(profiles)):
        try:
            profiles[i] = profiles[i].strip().split(sep=" ")
        except AttributeError:
            pass
    open("dane_logowania.txt", "w").write("")
    for i in range(0, len(profiles)):
        row = ""
        for q in range(0, n):
            row += str(profiles[i][q])+" "
        row.strip()
        row += "\n"
        open("dane_logowania.txt", "a").write(row)

def generate_code():
    return random.randint(1,9999)

def password_coding(password, code):
    coded_password = ""
    for i in range(0, len(password)):
        coded_password += str(ord(password[i])+code)
    return coded_password

def promote():
    list()
    username = input("\nPodaj nazwę użytkownika, któremu chcesz nadać uprawnienia administratora: ")
    profiles = open("dane_logowania.txt", "r").readlines()
    for i in range(0, len(profiles)):
        profiles[i] = profiles[i].strip().split(sep=" ")
        if profiles[i][0] == username:
            profiles[i][3] = "1"
    print(profiles)
    open("dane_logowania.txt", "w").write("")
    for i in range(0, len(profiles)):
        row = ""
        for q in range(0, n):
            row += str(profiles[i][q]) + " "
        row.strip()
        row += "\n"
        open("dane_logowania.txt", "a").write(row)

def demote():
    list()
    username = input("\nPodaj nazwę użytkownika, któremu chcesz odebrać uprawnienia administratora: ")
    profiles = open("dane_logowania.txt", "r").readlines()
    for i in range(0, len(profiles)):
        profiles[i] = profiles[i].strip().split(sep=" ")
        if profiles[i][0] == username:
            profiles[i][3] = "0"
    open("dane_logowania.txt", "w").write("")
    for i in range(0, len(profiles)):
        row = ""
        for q in range(0, n):
            row += str(profiles[i][q]) + " "
        row.strip()
        row += "\n"
        open("dane_logowania.txt", "a").write(row)

logged_in = 0
username = ""
password = ""
admin_permissions = 0
while logged_in == 0:
    print("\n\t\tLOGOWANIE")
    username = input("Podaj nazwę użytkownika: ")
    password = input("Podaj hasło: ")
    logged_in = login(username, password)
while logged_in:
    action = input("Co chcesz wykonać?: ")
    if action == "list":
        if admin(username):
            list()
    if action == "delete":
        if admin(username):
            delete_user()
    if action == "promote":
        if admin(username):
            promote()
    if action == "demote":
        if admin(username):
            demote()
    if action == "exit":
        logged_in = 0