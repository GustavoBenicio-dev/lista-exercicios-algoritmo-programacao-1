public class Main {
    public static void main(String[] args) {
        final int ESTOQUE_MINIMO = 10;
        int estoqueAtual = 7;

        boolean resultado = estoqueAtual <= ESTOQUE_MINIMO;
        System.out.println("O estoque está menor ou igual ao mínimo: " + resultado);
    }
}