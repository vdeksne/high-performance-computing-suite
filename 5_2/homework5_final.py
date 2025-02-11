#test 1
print("***********")
print("1. uzdevums")
print("***********")
# Define the dimensions M and N
M = int(input("Enter the number of rows (M): "))
N = int(input("Enter the number of columns (N): "))

# Function to input matrix
def input_matrix(rows, cols):
    matrix = []
    for i in range(rows):
        row = []
        print(f"Enter values for row {i+1}:")
        for j in range(cols):
            while True:
                try:
                    value = int(input(f"Enter value for element [{i+1}][{j+1}]: "))
                    row.append(value)
                    break  # Exit the loop if input is valid
                except ValueError:
                    print("Invalid input. Please enter an integer.")
        matrix.append(row)
    return matrix

# Input the matrix from the user
matrix = input_matrix(M, N)

# Print the matrix
print("Matrix:")
for row in matrix:
    print(row)

# Find the minimum element in each row
min_elements = []
for row in matrix:
    min_elements.append(min(row))

# Print the minimum elements
print("Minimum elements in each row:")
for i, min_element in enumerate(min_elements):
    print(f"Row {i+1}: {min_element}")

#test 2
print("***********")
print("2. uzdevums")
print("***********")

# Function to input matrix
def input_matrix(rows, cols):
    matrix = []
    print(f"Enter the elements for a {rows}x{cols} matrix:")
    for i in range(rows):
        row = []
        for j in range(cols):
            value = int(input(f"Enter element at position [{i+1}, {j+1}]: "))
            row.append(value)
        matrix.append(row)
    return matrix

# Function to display matrix
def display_matrix(matrix):
    for row in matrix:
        print(row)

# Function to add two matrices
def add_matrices(A, B, rows, cols):
    result = []
    for i in range(rows):
        row = []
        for j in range(cols):
            row.append(A[i][j] + B[i][j])  # Element-wise addition
        result.append(row)
    return result

# Main program
if __name__ == "__main__":
    # Define matrix dimensions
    rows = 3
    cols = 3

    # Input matrices A and B
    print("Matrix A:")
    A = input_matrix(rows, cols)
    
    print("\nMatrix B:")
    B = input_matrix(rows, cols)

    # Add matrices A and B
    C = add_matrices(A, B, rows, cols)

    # Display result
    print("\nMatrix A + Matrix B is:")
    display_matrix(C)

#test 3
print("***********")
print("3. uzdevums")
print("***********")

a = [ [1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12] ]
b = [ 1, 2, 3, 4]
c = [ 0 ] * 3

for i in range(len(a)):
    temp = 0
    for j in range(len(a[i])):
        temp += a[i][j] * b[j]
    c[i] = temp
print (c)

