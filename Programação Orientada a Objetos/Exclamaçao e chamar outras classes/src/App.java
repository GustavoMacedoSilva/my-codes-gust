public class App {
    public static void main(String[] args) throws Exception {

        String teste = addExclamation("Teste");
        System.out.println(teste);
    }

    public static String addExclamation(String s) {

        return s + "!";
    }
}
