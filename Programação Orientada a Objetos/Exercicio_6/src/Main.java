public class Main {
    public static void main(String[] args) {
        Piloto pilot = new Piloto();
        Kart kart1 = new Kart();
        Piloto pilot2 = new Piloto();
        Kart kart2 = new Kart();

        pilot.nome = "Mario";
        pilot.vilao = false;
        kart1.nome = "Kart do Mario";
        kart1.piloto = pilot;
        kart1.motor.cilidradas = "150";
        kart1.motor.velocidade_maxima = 150;
        
        pilot2.nome = "Bowser";
        pilot2.vilao = true;
        kart2.nome = "Kart do Bowser";
        kart2.piloto = pilot2;
        kart2.motor.cilidradas = "50";
        kart2.motor.velocidade_maxima = 100;

        kart1.motor.mostrarInfo();
        kart1.piloto.soltaSuperPoder();;
        kart1.fazerDrift();
        kart1.pular();
        kart1.soltarTurbo();
        //msm coisa pra kart2
    }
}
