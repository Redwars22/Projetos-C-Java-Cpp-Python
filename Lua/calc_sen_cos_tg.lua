function convertToRadians(value)
    return math.rad(value)
end

function GetSinCosTan(radians)
    print("SENO: " .. math.sin(radians))
    print("COSSENO: " .. math.cos(radians))
    print("TANGENTE: " .. math.tan(radians))
    print("-------------------------------")
end

print("######[ CALCULADORA SENO, COSSENO, TANGENTE ]######")
while true do
    print("Digite o valor em graus (0 a 360):")
    value = io.read()
    radians = convertToRadians(value)
    GetSinCosTan(radians)
end

--lua calc_sen_cos_tg.lua