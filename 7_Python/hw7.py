print ("Uzevums 1")

def binomial_coefficient(m, n):
    # Base cases
    if m == 0 or m == n:
        return 1
    # Recursive case
    return binomial_coefficient(m, n - 1) + binomial_coefficient(m - 1, n - 1)


print ("Uzevums 2")

def Digits(S):
    if not S:
        return 0
    if S[0].isdigit():
        return 1 + Digits(S[1:])
    else:
        return Digits(S[1:])

# Piemērs
S = "a1b2c3"
print(Digits(S))  # Izvadei jābūt 3

print ("Uzevums 3")
def diagonal_sum(matrix):
    total = 0
    for i in range(len(matrix)):
        total += matrix[i][i]
    return total

# Piemērs
matrix = [
    [1, 2, 3, 4, 5, 6, 7, 8, 9, 10],
    [11, 12, 13, 14, 15, 16, 17, 18, 19, 20],
    [21, 22, 23, 24, 25, 26, 27, 28, 29, 30],
    [31, 32, 33, 34, 35, 36, 37, 38, 39, 40],
    [41, 42, 43, 44, 45, 46, 47, 48, 49, 50],
    [51, 52, 53, 54, 55, 56, 57, 58, 59, 60],
    [61, 62, 63, 64, 65, 66, 67, 68, 69, 70],
    [71, 72, 73, 74, 75, 76, 77, 78, 79, 80],
    [81, 82, 83, 84, 85, 86, 87, 88, 89, 90],
    [91, 92, 93, 94, 95, 96, 97, 98, 99, 100]
]

print(diagonal_sum(matrix))  # Izvadei jābūt 505

print ("Uzevums 4")
def zero_below_diagonal(matrix):
    for i in range(len(matrix)):
        for j in range(i):
            matrix[i][j] = 0
    return matrix

# Piemērs
matrix = [
    [1, 2, 3, 4, 5, 6, 7, 8, 9, 10],
    [11, 12, 13, 14, 15, 16, 17, 18, 19, 20],
    [21, 22, 23, 24, 25, 26, 27, 28, 29, 30],
    [31, 32, 33, 34, 35, 36, 37, 38, 39, 40],
    [41, 42, 43, 44, 45, 46, 47, 48, 49, 50],
    [51, 52, 53, 54, 55, 56, 57, 58, 59, 60],
    [61, 62, 63, 64, 65, 66, 67, 68, 69, 70],
    [71, 72, 73, 74, 75, 76, 77, 78, 79, 80],
    [81, 82, 83, 84, 85, 86, 87, 88, 89, 90],
    [91, 92, 93, 94, 95, 96, 97, 98, 99, 100]
]

zero_below_diagonal(matrix)

for row in matrix:
    print(row)
