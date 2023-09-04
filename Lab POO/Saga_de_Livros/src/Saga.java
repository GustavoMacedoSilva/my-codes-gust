public class Saga {
    Livro [] livros;
    int nota;

    public Saga(){
        livros = new Livro[10];
    }
    
    void listarLivros(){
        for(Livro book: livros){
            if(book != null){
                System.out.println("Titulo do livro: " + book.titulo);
                System.out.println("Paginas :" + book.paginas);
            }
        }
    }

}
