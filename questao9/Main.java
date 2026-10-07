public class Main {
    public static void main(String[] args) {
        final int VELOCIDADE_LUZ = 300000;
        int tempoSegundos = 10;

        long distancia = (long) VELOCIDADE_LUZ * tempoSegundos;
        System.out.println("Distância percorrida: " + distancia + " km");
    }
}