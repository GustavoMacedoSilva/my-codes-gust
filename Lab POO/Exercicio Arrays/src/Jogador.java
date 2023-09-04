public class Jogador {
    
        Arma arma_do_personagem;
        int energia;
        int vida;

        void atacar(Jogador alvo){
            if(energia>=arma_do_personagem.custoDeEnergia){
                alvo.vida -= arma_do_personagem.dano;
                energia -= arma_do_personagem.custoDeEnergia;
            }
            else{
                System.out.println("Não possui energia o suficiente para essa ação.");
            }
        }

        Jogador(){
        }

        Jogador(Arma arma, int energia, int vida){
            this.arma_do_personagem = arma;
            this.energia = energia;
            this.vida = vida;
        }

        public String toString(){
            return "Vida do Jogador: " + vida + " Energia do Jogador: " + energia + "Dano da arma: " + arma_do_personagem.dano;
        }
}
