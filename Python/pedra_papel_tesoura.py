import random

def PedraPapelTesoura():
    choices = ['PEDRA', 'PAPEL', 'TESOURA']
    print(">" + random.choice(choices))

while True:   
    choice = input("Digite 0 para continuar e 1 para sair: ")
    if choice == "0":
        PedraPapelTesoura()
    elif choice == '1':
        break