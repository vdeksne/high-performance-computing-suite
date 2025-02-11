# 1. uzdevums 
print("1. uzdevums ")


def create_file_with_stars(filename, N, K):
    with open(filename, 'w') as file:
        for _ in range(N):
            file.write('*' * K + '\n')

# Piemērs, kā izmantot funkciju
filename = 'output.txt'
N = 5  # Rindu skaits
K = 10  # '*' simbolu skaits katrā rindā

create_file_with_stars(filename, N, K)

# 2. uzdevums
print("2. uzdevums ")

def create_multiplication_table(filename, N, M):
    with open(filename, 'w') as file:
        file.write(f"Reizinājuma tabula {N} x {M}\n")
        for i in range(1, N + 1):
            for j in range(1, M + 1):
                file.write(f"{i * j}\t")
            file.write('\n')

# Ievadīt N un M vērtības no lietotāja
N = int(input("Ievadiet N vērtību: "))
M = int(input("Ievadiet M vērtību: "))

filename = 'multiplication_table.txt'
create_multiplication_table(filename, N, M)

# 3. uzdevums
print("3. uzdevums ")

def read_and_print_file():
    filename = input("Ievadiet datnes nosaukumu: ")
    try:
        with open(filename, 'r') as file:
            content = file.read()
            print(content)
    except FileNotFoundError:
        print(f"Datne '{filename}' netika atrasta.")

# Izsaucam funkciju
read_and_print_file()

#4. uzdevums 
print("4. uzdevums ")
def count_character_in_file():
    filename = input("Ievadiet datnes nosaukumu: ")
    character = input("Ievadiet simbolu: ")
    
    if len(character) != 1:
        print("Lūdzu, ievadiet tikai vienu simbolu.")
        return
    
    try:
        with open(filename, 'r') as file:
            content = file.read()
            count = content.count(character)
            print(f"Simbols '{character}' parādās {count} reizes datnē '{filename}'.")
    except FileNotFoundError:
        print(f"Datne '{filename}' netika atrasta.")

# Izsaucam funkciju
count_character_in_file()