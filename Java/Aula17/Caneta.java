public class Caneta {
  public String modelo;
  private double ponta;
  private boolean tampado;
  private String cor;

  public Caneta(String marca, double ponta, String cor) {
    this.tampar();
    this.cor = cor;
    this.modelo = marca;
    this.ponta = ponta;
  }

  public String getModelo() {
    return this.modelo;
  }

  public void setModelo(String modelo) {
    this.modelo = modelo;
  }

  public double getPonta() {
    return this.ponta;
  }

  public void setPonta(float ponta) {
    this.ponta = ponta;
  }

  public void tampar() {
    this.tampado = true;
  }

  public void destampar() {
    this.tampado = false;
  }

  public void status() {
    System.out.println("SOBRE A CANETA");
    System.out.println("Modelo: " + this.modelo);
    System.out.println("Ponta: " + this.ponta);
    System.out.println("Cor: " + this.cor);
    System.out.println("Tampada: " + this.tampado);
  }
}