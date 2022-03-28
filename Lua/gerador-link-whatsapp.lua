base_link = "https://api.whatsapp.com/send?"
phone_url = "phone="
text_url = "&text="

print("Digite o número: ")
phoneNumber = io.read()
print("Digite a mensagem (no lugar dos espaços, use %20): ")
message = io.read()
print("\n\nLINK: " .. base_link .. phone_url .. phoneNumber .. text_url .. message)