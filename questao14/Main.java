import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite o valor do produto: ");
        double valorProduto = sc.nextDouble();
        System.out.print("Digite a quantidade comprada: ");
        int quantidade = sc.nextInt();

        double valorTotal = valorProduto * quantidade;
        double desconto = valorTotal * 0.10;
        double valorFinal = valorTotal - desconto;

        System.out.printf("Valor total: %.2f%n", valorTotal);
        System.out.printf("Valor final com desconto: %.2f%n", valorFinal);

        sc.close();
    }
}