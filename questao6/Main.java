public class Main {
    public static void main(String[] args) {
        int a = 5, b = 10, c = 15;

        System.out.println("Antes da troca: a = " + a + ", b = " + b);

        int aux = a;
        a = b;
        b = aux;

        System.out.println("Depois da troca: a = " + a + ", b = " + b);
    }
}