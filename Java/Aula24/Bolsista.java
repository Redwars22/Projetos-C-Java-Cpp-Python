public class Bolsista extends Aluno {
  public float bolsa;

  public void renovarBolsa(){
    System.out.println("A bolsa do/da " + this.getNome() + " foi renovada.");
  }

  @Override
  public void pagarMensalidade(){
    System.out.println(this.getNome() + " é bolsista.");
  }
}