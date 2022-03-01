import random

from numpy import number

def generatePassword(length):
    i = 0
    char = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%&*()-+=`´{[}]^;~:.,'
    password = ''
    
    while i < length:
        password += random.choice(char)
        i += 1
    
    print("Senha gerada: " + password)

print("==========[ GERADOR DE SENHA ALEATÓRIA EM PYTHON ]==========")
while True:
    length = int(input("Quantos caracteres deverá ter a senha?: "))
    generatePassword(length)
    print("----------------------------------")