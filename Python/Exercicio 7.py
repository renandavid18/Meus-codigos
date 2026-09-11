print("Ola me informe 3 numeros diferentes")
n1 = int(input("Me informa o primeiro numero: "))
n2 = int(input("Me informa o segundo numero: "))
n3 = int(input("Me informa o terceiro numero: "))

if(n1 == n2 and n1 == n3 and n2 == n3):
    print(f"Os 3 numeros sao iguais {n1} = {n2} = {n3}")
elif(n1 == n2 and n1 != n3):
    print(f"2 desses numeros sao iguais ({n1} = {n2}) \u2260 {n3}")
elif(n2 == n3 and n1 != n2 ):
    print(f"2 desses numeros sao iguais ({n1} = {n2}) \u2260 {n3}")
else:
    print(f"Os 3 numeros sao diferentes {n1} \u2260 {n2} \u2260 {n3}")
