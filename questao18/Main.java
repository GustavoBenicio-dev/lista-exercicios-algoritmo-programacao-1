import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite a base do retângulo: ");
        double base = sc.nextDouble();
        System.out.print("Digite a altura do retângulo: ");
        double altura = sc.nextDouble();

        double perimetro = 2 * (base + altura);
        double area = base * altura;

        System.out.println("Perímetro: " + perimetro);
        System.out.println("Área: " + area);

        sc.close();
    }
}