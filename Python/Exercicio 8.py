mediaescolar = int(input("Me informa a media de sua escola: "))

nota1 = int(input("Me informa o primeira nota: "))
nota2 = int(input("Me informa o segunda nota: "))
nota3 = int(input("Me informa o terceira nota: "))

media = (nota1 + nota2 + nota3)/3

if(media >= mediaescolar):
    print(f"Sua media final foi de {media} > {mediaescolar}\n\n        APROVADO")
elif(media < 3):
    print(f"Sua media final foi de {media} < {mediaescolar.2}\n\n        REPROVADO")
else:
    print("Sua media foi maio")