# 1. uzdevums 

# Ievadīt veselos skaitļus K un N
K = int(input("Ievadiet veselo skaitli K: "))
N = int(input("Ievadiet veselo skaitli N (N > 0): "))

# Pārbaudīt, vai N ir lielāks par 0
if N <= 0:
    print("Kļūda: N jābūt lielākam par 0.")
else:
    # Izvadīt K N reizes
    for i in range(N):
        print(K)

# 2. uzdevums 

# Ievadīt skaitli x un veselo skaitli N
x = float(input("Ievadiet skaitli x: "))
N = input("Ievadiet veselo skaitli N: ")

# Pārbaudīt, vai N ir vesels skaitlis
if not N.isdigit():
    print("Kļūda: N jābūt veselam skaitlim")
else:
    N = int(N)

    # Aprēķināt Y
    Y = 0.0

    for i in range(N + 1):
        power = 2 ** i
        Y += 1 / (x ** power)

    # Izvadīt rezultātu
    print("Y vērtība ir:", Y)

# 3. uzdevums

# Funkcija, lai izdrukātu reizinājuma tabulu
def reizinajuma_tabula():
    # Izdrukāt virsrakstu
    print("Reizinājuma tabula:")
    
    # Izdrukāt tabulu
    for i in range(1, 11):
        for j in range(1, 11):
            print(f"{i * j:2}", end=" ")
        print()  # Jauna rinda pēc katras rindas

# Izsaukt funkciju, lai izdrukātu reizinājuma tabulu
reizinajuma_tabula()

# 4. uzdevums

# Ievadīt veselos skaitļus A un B
A = int(input("Ievadiet veselo skaitli A (A < B): "))
B = int(input("Ievadiet veselo skaitli B (A < B): "))

# Pārbaudīt, vai A ir mazāks par B
if A >= B:
    print("Kļūda: A jābūt mazākam par B.")
else:
    # Izvadīt visus veselus skaitļus starp A un B (ieskaitot) augošā secībā
    for i in range(A, B + 1):
        for j in range(i):
            print(i, end=" ")
        print()  # Jauna rinda pēc katra skaitļa grupas

# 5. uzdevums

# Ievadīt naturālo skaitli c
c = int(input("Ievadiet naturālo skaitli c: "))

# Pārbaudīt, vai c ir naturāls skaitlis
if c <= 0:
    print("Kļūda: c jābūt naturālam skaitlim (c > 0).")
else:
    # Atrast un izvadīt visus naturālo skaitļu pārus (a, b), kuriem a^2 + b^2 = c^2
    found = False
    for a in range(1, c):
        for b in range(a, c):  # Sākam no a, lai izvairītos no dublēšanās
            if a**2 + b**2 == c**2:
                print(f"({a}, {b})")
                found = True
    if not found:
        print("Nav atrasti naturālo skaitļu pāri (a, b), kuriem a^2 + b^2 = c^2.")

# 6.uzdevums 

pi1 = 4
pi2 = 4 - 4/3
p = 5

# The absolute value of a number is its distance from zero on the number line, without considering the direction
while abs(pi1 - pi2) > 0.0001: 
    pi1 = pi2 + 4 / p
    p += 2
    pi2 = pi1 - 4 / p
    p += 2

print(pi1)