import math
from power_module import Power

# Function to convert radians to degrees
def RadToDeg(R):
    return R * 180 / math.pi

# Prompt the user to enter 5 angles in radians and convert them to degrees
print("Uzdevums 1")

for i in range(5):
    try:
        R = float(input(f"Enter angle {i+1} in radians (0 < R < 2π): "))
        if 0 < R < 2 * math.pi:
            print(f"{R} radians is equal to {RadToDeg(R)} degrees")
        else:
            print("Please enter a value in the range 0 < R < 2π.")
    except ValueError:
        print("Invalid input. Please enter a numeric value.")

print("Uzdevums 2")

# Function to calculate the double factorial
def Fact2(N):
    if N <= 0:
        return 1
    result = 1
    if N % 2 == 0:  # N is even
        for i in range(2, N + 1, 2):
            result *= i
    else:  # N is odd
        for i in range(1, N + 1, 2):
            result *= i
    return result

# Prompt the user to enter a number and find its double factorial
try:
    N = int(input("Enter a number to find its double factorial: "))
    if N > 0:
        print(f"The double factorial of {N} is {Fact2(N)}")
    else:
        print("Please enter a positive integer.")
except ValueError:
    print("Invalid input. Please enter an integer.")

print("Uzdevums 3")

# Function to check if a number is even
def Even(K):
    return K % 2 == 0

# Initialize counter for even numbers
even_count = 0

# Loop to get 10 integers from the user
for i in range(10):
    try:
        num = int(input(f"Enter integer {i+1}: "))
        if Even(num):
            even_count += 1
    except ValueError:
        print("Invalid input. Please enter an integer.")

# Print the count of even numbers
print(f"The number of even integers entered is: {even_count}")

print("Uzdevums 4")

# Prompt the user to enter the base and exponent
try:
    A = float(input("Enter the base (A): "))
    B = int(input("Enter the exponent (B): "))
    # Calculate and print the result of A raised to the power of B
    print(f"{A} raised to the power of {B} is {Power(A, B)}")
except ValueError:
    print("Invalid input. Please enter a numeric value for the base and an integer for the exponent.")