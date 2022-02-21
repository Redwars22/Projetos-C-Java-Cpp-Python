isRunning = True

while isRunning:
    print("#####[ É DIVISÍVEL OU NÃO? ]#####")
    dividendo = input("Dividendo: ")
    divisor = input("Divisor: ")
    
    if int(dividendo) == 0 or int(divisor) == 0:
        break
    
    resultado = int(dividendo) % int(divisor)

    if resultado == 0:
        print("É DIVISÍVEL! RESTO = 0!\n\n")
    else:
        print("NÃO É DIVISÍVEL! RESTO = " + resultado + "\n\n")