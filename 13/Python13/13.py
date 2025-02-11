def factorial(n):
    if n < 0:
        raise ValueError("Faktoriāls neeksistē negatīvam skaitlim")
    elif n == 0 or n == 1:
        return 1
    else:
        result = 1
        for i in range(2, n + 1):
            result *= i
        return result

try:
    num = int(input("Ievadiet skaitli: "))
    print(f"{num}! = {factorial(num)}")
except ValueError as e:
    print(f"Kļūda: {e}")