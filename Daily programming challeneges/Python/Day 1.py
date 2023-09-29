a = int(input("Enter dividend: "))
b = int(input("Enter divisor: "))
i = 0
while True:
    a -= b
    i += 1
    if a < 0:
        print(f"Quotient: {i-1}")
        break
    elif a == 0:
        print(f"Quotient: {i}")
        break
