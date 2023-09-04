import java.util.Scanner;

public class Exercicio3 {
    public static void main(String[] args) {
        Scanner Entrada2 = new Scanner(System.in);
        System.out.println("Digite a nota da NPA:");
        int NPA = Entrada2.nextInt();

        if (NPA < 60) {
            int NP3 = Entrada2.nextInt();
            float NPF = (NPA + NP3) / 2;
            System.out.println(NPF);
        } else {
            System.out.println("Voce passou!!!!");
        }
        Entrada2.close();
    }
}