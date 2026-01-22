n = int(input("Enter: "))
for i in range(n//2 + 1):
    print(" " * (n//2 - i) + "*" * (2*i + 1))

# lower half
for i in range(1, n//2 + 1):
    print(" " * i + "*" * (n - 2*i))
