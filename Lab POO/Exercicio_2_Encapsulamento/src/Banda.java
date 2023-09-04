public class Banda {
    Musica[] musicas = new Musica[10];
    String nome;
    int numerosDeIntegrantes;

    public void tocarMusica(int posição){
        System.out.println("Tocando " + musicas[posição].getMusica());
    }

    public void tocarShow(){
        System.out.println("Tocando show!");
    }
    public boolean adicionarMusica(String musica){
        for(int i = 0; i < musicas.length;){
            if(musicas == null){
                musicas[i].setMusica(musica);
                return true;
            }
            else{
                i++;
            }
        }
        return false;
    }
    public boolean deletarMusica(String nome){
        int i=0;
        for(Musica music:musicas){
            if( musicas[i].setMusica() == nome)
        }
    }
}
