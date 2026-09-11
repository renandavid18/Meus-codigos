n = int(input("Ola me informa o numero qualquer: "))

if(n % 2 == 0 and n % 5 == 0 and n % 10 == 0):
    print(f"O numero {n} e multiplo de 2, 5 e 10")
elif(n % 2 == 0):
    print(f"O numero {n} e multiplo de 2")
elif(n % 5 == 0):
    print(f"O numero {n} e multiplo de 5")
elif(n % 10 == 0):
    print(f"O numero {n} e multiplo de 10")
else:
    print(f"O numero {n} nao e multiplo de 2, 5 ou 10")
