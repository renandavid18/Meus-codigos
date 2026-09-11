print("Ola me informe 2 numeros entre 10 e 20")
n1 = int(input("Me informa o primeiro numero: "))
n2 = int(input("Me informa o segundo numero: "))

if(n1 >= 10 and n1 <= 20 and n2 >= 10 and n2 <= 20):
    print(f"Ambos valores estao entre 10 e 20 \nO primeiro numero e: {n1} \nO segundo numero e: {n2}")
elif(n1 >= 10 and n1 <= 20):
    print("Apenas o n1 esta entre 10 e 20")
elif(n2 >= 10 and n2 <= 20):
    print("Apenas o n2 esta entre 10 e 20")
else:
    print("Nenhum numero esta entre 10 e 20")