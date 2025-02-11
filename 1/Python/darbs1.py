# s = int (input("ievadi skaitli: "))
# print(s)

# 1. uzdevums 

# Ievada kvadrāta malu garumu
a = float(input("ievadi kvadrāta malu garumu: "))
# Aprēķina kvadrāta perimetru
p = 4*a
# Izvada kvadrāta perimetru
print ("kvadrāta perimetrs ir", p)

# 2. uzdevums 

# Ievada kvadrāta malu garumu
a = float(input("ievadi kvadrāta malu garumu: "))
# Aprēķina kvadrāta laukumu
S = a * a
# Izvada kvadrāta laukumu
print ("kvadrāta perimetrs ir", S)

# 3. uzdevums 
# Uzrakstīt programmu: Ir dotas taisnstūra malas a un b. Atrast laukumu S=ab un perimetru P=2(a+b)

# Ievada taisnstūra malu platumu
a = float(input("ievadi taisnstūra malu platumu: "))
# Ievada taisnstūra malu garumu
b = float(input("ievadi taisnstūra malu garumu: "))
# Aprēķina taisnstūra laukumu
S = a * b
# Aprēķina taisnstūra perimetru
P = 2 * (a + b)
# Izvada taisnstūra laukumu
print("taisnstūra laukums ir", S)
# Izvada taisnstūra perimetru
print("taisnstūra perimetrs ir", P)

# 4. uzdevums

# 4. Uzrakstīt programmu: Ir dots riņķa diametrs d. Atrast riņķa garumu L=Pi*d. Pieņemt, ka Pi ir vienāds ar 3.1415 

# Definē Pi vērtību
Pi = 3.1415

# Ievada riņķa diametru
d = float(input("Ievadi riņķa diametru: "))

# Aprēķina riņķa garumu
L = Pi * d

# Izvada riņķa garumu
print("Riņķa garums ir", L)

# 5. uzdevums: Ir doti divi skaitli a un b. Atrast vidējo aritmētisko (a+b)/2

# Ievada pirmo skaitli a
a = float(input("Ievadi pirmo skaitli a: "))
# Ievada otro skaitli b
b = float(input("Ievadi otro skaitli b: "))

# Aprēķina vidējo aritmētisko
mean = (a + b) / 2

# Izvada vidējo aritmētisko
print("Vidējais aritmētiskais ir", mean)

# 6. uzdevums: Atrast funkcijas y = 3x^6 - 6x^2 - 7 vērtību priekš dota x.

# Ievada x vērtību
x = float(input("Ievadi x vērtību: "))

# Aprēķina funkcijas y vērtību
y = 3 * x**6 - 6 * x**2 - 7

# Izvada funkcijas y vērtību
print("Funkcijas y vērtība ir", y)

# 7. uzdevums: Atrast funkcijas z = x^3 + 3xy – (x+y)^2 + y^4 vērtību priekš dota x un y. 

# Ievada x vērtību
x = float(input("Ievadi x vērtību: "))
# Ievada y vērtību
y = float(input("Ievadi y vērtību: "))

# Aprēķina funkcijas z vērtību
z = x**3 + 3*x*y - (x + y)**2 + y**4

# Izvada funkcijas z vērtību
print("Funkcijas z vērtība ir", z)

# 8. uzdevums: Ir dots skaitlis A. Atrast A^8, izmantojot trīs (ne vairāk!) operācijas (reizināšana). 

# Ievada skaitli A
A = float(input("Ievadi skaitli A: "))

# Aprēķina A^8, izmantojot trīs reizināšanas operācijas
A2 = A * A       # A^2
A4 = A2 * A2     # A^4
A8 = A4 * A4     # A^8

# Izvada A^8 vērtību
print("A^8 vērtība ir", A8)

# 9. uzdevums: Uzrakstīt programmu, kas saskaita trīs skaitļus

# Ievada pirmo skaitli
num1 = float(input("Ievadi pirmo skaitli: "))
# Ievada otro skaitli
num2 = float(input("Ievadi otro skaitli: "))
# Ievada trešo skaitli
num3 = float(input("Ievadi trešo skaitli: "))

# Aprēķina trīs skaitļu summu
sum_of_numbers = num1 + num2 + num3

# Izvada trīs skaitļu summu
print("Trīs skaitļu summa ir", sum_of_numbers)

# 10. uzdevums: Uzrakstīt programmu, kas pārveido temperatūru no Fārenheita Celsija grādos. 

# Ievada temperatūru Fārenheita grādos
fahrenheit = float(input("Ievadi temperatūru Fārenheita grādos: "))

# Konvertē temperatūru uz Celsija grādiem
celsius = (fahrenheit - 32) * 5 / 9

# Izvada temperatūru Celsija grādos
print("Temperatūra Celsija grādos ir", celsius)

# 11. uzdevums: Ir dota leņķa vērtība alpha (α) radiānos. Atrast leņķi grādos, α°= 180°/π * α pieņemt, ka 180° = π, un π ir vienāds ar 3.1415 

# Ievada leņķa vērtību radiānos
alpha = float(input("Ievadi leņķa vērtību radiānos: "))

# Definē pi vērtību
pi = 3.1415

# Konvertē leņķi grādos
alpha_degrees = (180 / pi) * alpha

# Izvada leņķi grādos
print("Leņķis grādos ir", alpha_degrees)