class Main {
  public static void main(String[] args) {
    Conta conta1 = new Conta();


    conta1.setNumeroConta(1234567);
    conta1.setDono("Léo Andrew");
    conta1.abrirConta("CC");
    conta1.getSaldo();

    conta1.estadoAtual();
    conta1.depositar(320.00);
    conta1.estadoAtual();
    conta1.sacar(94.00);
    conta1.estadoAtual();
  }
}