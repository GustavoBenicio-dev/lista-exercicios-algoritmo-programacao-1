public class Main {
    public static void main(String[] args) {
        final int TEMPERATURA_CONGELAMENTO = 0;
        int temperaturaAtual = 15;

        boolean resultado = temperaturaAtual > TEMPERATURA_CONGELAMENTO;
        System.out.println("A temperatura atual é maior que a de congelamento: " + resultado);
    }
}