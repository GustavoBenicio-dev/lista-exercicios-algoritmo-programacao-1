public class Main {
    public static void main(String[] args) {
        final double LIMITE_CHEQUE_ESPECIAL = 500;
        double saldoConta = 320.50;

        boolean resultado = saldoConta > LIMITE_CHEQUE_ESPECIAL;
        System.out.println("O saldo é maior que o limite do cheque especial: " + resultado);
    }
}