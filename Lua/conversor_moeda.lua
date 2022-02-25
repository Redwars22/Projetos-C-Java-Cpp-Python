--Conversor de Dólar para Roblux, uma moeda fictícia
--cuja cotação é 1.53;

currency = 1.53;

function GetKey()
    print("\nDigite qualquer valor e pressione ENTER para continuar...")
    x = io.read()
end

function DollarToRoblux()
    print("CONVERTER DE DÓLAR PARA ROBLUX\n$ ")
    dollarValue = io.read();
    result = dollarValue / currency;
    print("VALOR EM ROBLUX: RBX " .. result)
end

function RobluxToDollar()
    print("CONVERTER DE ROBLUX PARA DÓLAR\nRBX ")
    robluxValue = io.read();
    result = robluxValue * currency;
    print("VALOR EM DÓLAR: $ " .. result)
end

while true do
    os.execute('clear')
    print("CONVERSOR DE MOEDAS\n")
    print("1-RBX para USD\n2-USD para RBX\n3-SAIR\n->")
    option = io.read()

    if option == '1' then
        RobluxToDollar()
        GetKey()
    elseif option == '2' then
        DollarToRoblux()
        GetKey()
    elseif option == '3' then
        break
    end
end