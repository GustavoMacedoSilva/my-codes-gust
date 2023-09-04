public class Main {
    public static void main(String[] args) {
        Zumbi zumbi = new Zumbi();

        zumbi.nome = "Kato Henrique";
        zumbi.vida = 100;

        Zumbi zumbi2 = new Zumbi();
        zumbi2.nome = "Zumbi Generico";
        zumbi2.vida = 100;
        
        System.out.println("Vida zumbi 1: " + zumbi.vida);
        System.out.println("Vida zumbi 2: " + zumbi2.vida);

        zumbi.transfereVida(zumbi2, 50);
        System.out.println("Vida zumbi 1: " + zumbi.vida);
        System.out.println("Vida zumbi 2: " + zumbi2.vida);

    }
}