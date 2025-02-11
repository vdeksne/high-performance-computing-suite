pi1 = 4
pi2 = 4/3
p = 3
# i = 1
while pi1 - pi2 > 0.0001:
    pi2 = pi1 - 4 / p
    # i+=1
    p = p + 2
    pi1 = pi2 + 4 / p 
    # i+=1
    p = p + 2
print(pi1)