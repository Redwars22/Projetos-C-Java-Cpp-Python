i = 0
sum = 0

print("#####[ CALCULADORA DE MÉDIA EM PYTHON ]#####")

while True:
    elements = int(input("Quantidade de elementos: "))
    
    if elements == 0:
        break

    while i < elements:
        x = int(input("x" + str(i+1) + ": "))
        sum = sum + x
        i = i + 1

    average = sum/elements 
    print("A média é: " + str(average) + "\n\n")
    i = 0
    sum = 0