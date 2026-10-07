public class Main {
    public static void main(String[] args) {
        final double TAXA_CONVERSAO = 5.35;
        double valorReais = 100.0;

        double valorDolar = valorReais / TAXA_CONVERSAO;
        System.out.println("Valor em dólares: " + valorDolar);
    }
}