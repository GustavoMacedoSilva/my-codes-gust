public class Autores {
    Saga[] sagas;

    public Autores(){
        sagas = new Saga[10];
    }

    String nome;
    
    void listarSagas(){
        for(Saga saga_aux: sagas){
            int i = 0;
            if(saga_aux != null){
                System.out.println("Livro: " + saga_aux.livros[i].titulo);
            }
        }
    }
}
