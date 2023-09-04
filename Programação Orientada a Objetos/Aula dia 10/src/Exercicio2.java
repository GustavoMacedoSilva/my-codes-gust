import java.util.Scanner;

public class Exercicio2 {
    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);
        int lanche1, lanche2, lanche3;

        lanche1 = entrada.nextInt();
        lanche2 = entrada.nextInt();
        lanche3 = entrada.nextInt();

        int Total = lanche1 + lanche2 + lanche3;

        System.out.println(Total);
        entrada.close();
    }
}
