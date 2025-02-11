# uzdevums 1

# Funkcija, kas aprēķina vērtību atkarībā no x
def f(x):
    if 0 <= x <= 5:
        return 8 * x - x ** 2  # Ja x ir intervālā [0, 5], atgriež 8x - x^2
    elif 10 <= x <= 200:
        return x + 6  # Ja x ir intervālā [10, 200], atgriež x + 6
    else:
        return None  # Ja x nav norādītajos intervālos, atgriež None

# Testa gadījumi
print(f(3))    # Izvade: 15
print(f(10))   # Izvade: 16
print(f(150))  # Izvade: 156
print(f(6))    # Izvade: None
print(f(250))  # Izvade: None

# uzdevums 2

# Funkcija, kas aprēķina vērtību atkarībā no x
def f(x):
    if x <= 0:
        return -x  # Ja x ir mazāks vai vienāds ar 0, atgriež -x
    elif 0 < x < 2:
        return x ** 2  # Ja x ir intervālā (0, 2), atgriež x^2
    else:
        return 4  # Ja x ir lielāks vai vienāds ar 2, atgriež 4

# Testa gadījumi
print(f(-3))  # Izvade: 3
print(f(1))   # Izvade: 1
print(f(2))   # Izvade: 4
print(f(3))   # Izvade: 4

# uzdevums 3

# Funkcija, kas nosaka dienu skaitu gadā
def days_in_year(year):
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return 366  # Ja gads ir garais, atgriež 366
    else:
        return 365  # Ja gads nav garais, atgriež 365

# Testa gadījumi
print(days_in_year(2020))  # Izvade: 366 (garais gads)
print(days_in_year(2019))  # Izvade: 365 (parastais gads)
print(days_in_year(2000))  # Izvade: 366 (garais gads)
print(days_in_year(1900))  # Izvade: 365 (parastais gads)

# uzdevums 4

# Funkcija, kas nosaka, vai punkts atrodas sarkanajā zonā
def is_point_in_red_area(x, y):
    if (-1 <= x <= -0.5 or 0.5 <= x <= 1) and (-1 <= y <= -0.5 or 0.5 <= y <= 1):
        return True  # Ja x un y ir norādītajos intervālos, atgriež True
    else:
        return False  # Pretējā gadījumā atgriež False

# Lietotāja ievade
x = float(input("Ievadiet x koordināti: "))
y = float(input("Ievadiet y koordināti: "))

# Pārbauda, vai punkts atrodas sarkanajā zonā
if is_point_in_red_area(x, y):
    print("Punkts atrodas sarkanajā zonā.")
else:
    print("Punkts neatrodas sarkanajā zonā.")

# uzdevums 5

# Funkcijas aritmētiskām operācijām
def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b != 0:
        return a / b
    else:
        return "Kļūda: Dalīšana ar nulli"

# Dictionārs, kas kartē operāciju numurus uz funkcijām
operations = {
    1: add,
    2: subtract,
    3: multiply,
    4: divide
}

# Lietotāja ievade
operation_number = int(input("Ievadiet operācijas numuru (1-4): "))
a = float(input("Ievadiet pirmo skaitli (A): "))
b = float(input("Ievadiet otro skaitli (B): "))

# Veic operāciju
if operation_number in operations:
    result = operations[operation_number](a, b)
    print(f"Rezultāts ir: {result}")
else:
    print("Nederīgs operācijas numurs. Lūdzu, ievadiet numuru no 1 līdz 4.")

# uzdevums 6

# Funkcija, kas aprēķina y vērtību
def calculate_y(x):
    return x ** 2

# Definē diapazonu un soli
x_values = [x * 0.5 for x in range(2, 21)]  # Ģenerē vērtības no 1 līdz 10 ar soli 0.5

# Aprēķina un izvada y vērtības katram x
for x in x_values:
    y = calculate_y(x)
    print(f"x = {x}, y = {y}")

# uzdevums 7 

# Funkcija, kas aprēķina summu
def calculate_sum(A, N):
    sum = 1
    for i in range(1, N + 1):
        sum += A ** i
    return sum

# Lietotāja ievade
A = float(input("Ievadiet A vērtību: "))
N = int(input("Ievadiet N vērtību (jābūt pozitīvam veselam skaitlim): "))

# Pārliecinās, ka N ir pozitīvs
if N > 0:
    result = calculate_sum(A, N)
    print(f"Summa ir: {result}")
else:
    print("N jābūt pozitīvam veselam skaitlim.")