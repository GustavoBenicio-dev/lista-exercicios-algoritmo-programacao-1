public class Main {
    public static void main(String[] args) {
        int n1 = 20, n2 = 4;

        int resto = n1 % n2;
        System.out.println("Resto: " + resto);

        if (resto == 0) {
            System.out.println(n1 + " é divisível por " + n2);
        } else {
            System.out.println(n1 + " não é divisível por " + n2);
        }
    }
}