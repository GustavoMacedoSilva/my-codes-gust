public class Partida {
    Jogador[] array = new Jogador[10];

    boolean adicionarJogadorNaLista(Jogador jogador){ 
        boolean sucesso = true;
        boolean fracasso = false;
        for(int i = 0; i < array.length;){ //checa se um slot na array esta livre, se tiver ele aloca um jogador pelo parametro do metodo
            if(array[i] == null){          //se nao o contador sobe e o for se repete até passar por todos os slots do array
                array[i] = jogador;
                return sucesso; 
            }
            else{
                i++;
            }
        }
        return fracasso;
    }

    void lutaDeJogadores(int posição1, int posição2){
        //alterações no jogador 1
        array[posição1].vida -= array[posição2].arma_do_personagem.dano;
        array[posição1].energia -= array[posição1].arma_do_personagem.custoDeEnergia;

        //alteração no jogador 2
        array[posição2].vida -= array[posição1].arma_do_personagem.dano;
        array[posição2].energia -= array[posição2].arma_do_personagem.custoDeEnergia;
        
    }

    void listarJogadoresEArmas(){ //mostra as informações dos jogadores
        for(Jogador player: array){
            int i = 0;
            if(player != null){
                System.out.println("Vida do jogador " + i + ": " + array[i].vida);
                System.out.println("Energia do jogador " + i + ": " + array[i].energia);
            }
        }
    }
}
