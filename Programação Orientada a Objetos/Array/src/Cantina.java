public class Cantina {

    String nome;
    Salgado salgado[] = new Salgado[10];

    public void addSalgado(Salgado novoSalgado){
        for(int i = 0; i < salgado.length; i++){
            if(salgado[i] == null){
                salgado[i] = novoSalgado;
                break;
            }
        }
    }
    public void mostraInfo(){
        System.out.println("Nome da cantina: " + nome);
        for(int i = 0; i < salgado.length; i++){
            if (salgado[i] != null){
                System.out.println("Nome do salgado: " + salgado[i].nome);
            }
        }
    }
}