public class Kart {
    
    String nome;
    Piloto piloto;
    Motor motor;


    public Kart(){
        motor = new Motor();
    }

    void pular(){
        System.out.println("O kart pulou!");
    }

    void soltarTurbo(){
        System.out.println("Kart soltou o Turbo!");
    }

    void fazerDrift(){
        System.out.println("Kart fez Drift");
    }
}
