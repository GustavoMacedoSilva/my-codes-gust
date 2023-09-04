public class App {
    public static void main(String[] args) throws Exception {
        Cantina cantina1 = new Cantina();
        cantina1.nome = "Cantina do Inatel";
        Salgado salgado1 = new Salgado();
        Salgado salgado2 = new Salgado();
        Salgado salgado3 = new Salgado();

        salgado1.nome = "Kibe";
        salgado2.nome = "Coxinha";
        salgado3.nome = "Bolinha de Queijo";

        cantina1.addSalgado(salgado1);
        cantina1.addSalgado(salgado2);
        cantina1.addSalgado(salgado3);

        cantina1.mostraInfo();
    }
}
