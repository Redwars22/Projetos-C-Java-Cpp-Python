public class Conta {
  private double saldo;
  private boolean status;
  private int numeroConta;
  private String dono;
  private String tipo;

  void Conta() {
    setSaldo(0);
    setStatus(false);
  }

  public void abrirConta(String t) {
    setTipo(t);

    if (t.equals("CC"))
      setSaldo(50.00);
    else
      setSaldo(150.00);

    setStatus(true);
  }

  public void fecharConta() {
 

    if (saldo == 0) {
    } else
      return;
  }

  public void setSaldo(double saldo) {
    this.saldo = saldo;
  }

  public double getSaldo() {
    return this.saldo;
  }

  public int getNumeroConta() {
    return this.numeroConta;
  }

  public void setNumeroConta(int numero) {
    this.numeroConta = numero;
  }

  public void depositar(double valor) {
    if (status == true && valor != 0)
      this.saldo += valor;
  }

  public void estadoAtual() {
    System.out.println("CONTA " + this.getNumeroConta());
    System.out.println("TIPO " + this.getTipo());
    System.out.println("DONO " + this.getDono());
    System.out.println("SALDO R$" + this.getSaldo());
    System.out.println("STATUS " + this.getStatus());
  }

  public boolean getStatus() {
    return this.status;
  }

  public void setStatus(boolean status) {
    this.status = status;
  }

  public void setDono(String dono) {
    this.dono = dono;
  }

  public String getDono() {
    return this.dono;
  }

  public void setTipo(String tipo) {
    this.tipo = tipo;
  }

  public String getTipo() {
    return this.tipo;
  }

  public void sacar(double valor){
    if(valor != 0 && valor < this.saldo && status)
      this.saldo -= valor;
  }

  public void pagarMensalidade(double valor){
    if(status && tipo.equals("CC") && valor < this.saldo)
      this.saldo -= 12;
    else
      this.saldo -= 20;
  }
}