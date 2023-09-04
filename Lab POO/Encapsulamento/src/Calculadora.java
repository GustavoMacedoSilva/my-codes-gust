public class Calculadora {
    private static float PI = 3.14159265359f;

    public static double circunferencia(double radio){
        double circ = 2*PI*radio;
        return circ;
    }

    public static double volumeEsfera(double raio){
        double volume = (4/3)*PI*raio*raio*raio;
        return volume;
    }

    public static double volumeCilindro(double raio, double h){
        double volumeC = PI*raio*raio*h;
        return volumeC;
    }
}
