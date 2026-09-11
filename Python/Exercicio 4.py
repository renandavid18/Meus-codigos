n = int(input("Ola me informa o numero qualquer: "))

if(n % 3 == 0 and n % 7 == 0):
    print(f"O numero {n} e multiplo de 3 e 7")
elif(n % 3 == 0):
    print(f"O numero {n} e multiplo de 3")
elif(n % 7 == 0):
    print(f"O numero {n} e multiplo de 7")
else:
    print(f"O numero {n} nao e multiplo de 3 e 7")
