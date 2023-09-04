public class Zumbi {
    String nome;
    double vida;


    double mostraVida(){
        return vida;
    }

    void transfereVida(Zumbi zumbiAlvo, double quantia){
        vida += quantia;
        zumbiAlvo.vida -= quantia;
    }


}
