public class Professor extends Pessoa {
  private String formacao;
  private float salario;

  public void receberAumento(){
    this.setSalario(this.getSalario() + 150.99f);
  }

  public void setSalario(float salario){
    this.salario = salario;
  }

  public float getSalario(){
    return this.salario;
  }

    public void setFormacao(String formacao){
    this.formacao = formacao;
  }

  public String getFormacao(){
    return this.formacao;
  }
}