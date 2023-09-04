public class Personagem {
    
    String nome;
    int pontos;
    Arma arma_personagem;

    void usarArma(){
        arma_personagem.resistencia -= 2;
    }

    void tomarDano(){
        pontos -= 5;
    }
}
