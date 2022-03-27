function getRandomNumber(amount, min, max)
    os.execute("clear")
    print("NÚMEROS SORTEADOS: ")
    while amount > 0 do
        print(math.random(min, max) .. ", ")
        amount = amount + 1
    end
end

os.execute("clear")
print("##########<SORTEIO DE NÚMEROS EM LUA>##########\n")
print("QUANTIDADE DE NÚMEROS: ")
amount = io.read("n")
print("MÍNIMO: ")
min = io.read("n")
print("MÁXIMO: ")
max = io.read("n")
getRandomNumber(amount, min, max)