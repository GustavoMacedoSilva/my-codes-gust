public class App {
    public static void main(String[] args) throws Exception {
    int h = 5;
    double raio = 3.25;
    double circ;

    circ = Calculadora.circunferencia(raio);
    System.out.println("Circunferencia: " + circ);
    
    double volEsfera;
    volEsfera = Calculadora.volumeEsfera(raio);
    System.out.println("Volume da Esfera: " + volEsfera);

    double volCilindro;
    volCilindro = Calculadora.volumeCilindro(raio, h);
    System.out.println("Volume do Cilindro: " + volCilindro);
    }
}
