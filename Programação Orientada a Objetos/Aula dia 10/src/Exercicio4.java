import java.util.Scanner;
public class Exercicio4 {
    public static void main(String[] args) {
        Scanner entrada4 = new Scanner(System.in);

        int Alunos = entrada4.nextInt();
        switch (Alunos) {
            case 20:
                System.out.println("Usar sala I-16");
                break;
            case 10:
                System.out.println("Usar sala I-16");
                break;
            case 30:
            System.out.println("Usar sala I-22");
            break;

            default:
            System.out.println("Nenhuma das opções corretas!");
                break;
        }
       entrada4.close();

    }
}
