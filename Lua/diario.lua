clearCommand = 'clear'

function WriteToDiary()
    os.execute(clearCommand)
    text = io.read()
    print("\nDigite o dia:")
    day = io.read()
    print("Digite o mês: ")
    month = io.read()
    print("Digite o ano: ")
    year = io.read()
    date = (day .. "_" .. month .. "_" .. year)
    io.output(date .. '.diary')
    io.write(text)
    io.close()
    os.execute(clearCommand)
    print("-----------------------------------")
end

function ReadEntry()
    os.execute(clearCommand)
    print("\nDigite o dia:")
    day = io.read()
    print("Digite o mês: ")
    month = io.read()
    print("Digite o ano: ")
    year = io.read()
    date = (day .. "_" .. month .. "_" .. year)
    io.input(date .. '.diary')
    os.execute(clearCommand)
    file = io.read()
    print("Você está lendo o registro " .. date .. ".diary:\n")
    print(file .. "\n-------------------\n")
    io.close()
end

function Main()
    while true do
        print('APLICATIVO DE DIÁRIO EM LUA')
        print('Escolha uma opção: \n1-LER ENTRADA\n2-NOVA ENTRADA\n3-LIMPA TELA\n4-SAIR')
        local input = io.read()

        if input == '1' then
            ReadEntry()
            xv = io.read()
        elseif input == '2' then
            WriteToDiary()
        elseif input == '3' then
            os.execute(clearCommand)
        else
            break
        end
    end
end

Main()