valor_produto = float(input("Digite o valor do produto: "))
quantidade = int(input("Digite a quantidade comprada: "))

valor_total = valor_produto * quantidade
desconto = valor_total * 0.10
valor_final = valor_total - desconto

print(f"Valor total: {valor_total:.2f}")
print(f"Valor final com desconto: {valor_final:.2f}")