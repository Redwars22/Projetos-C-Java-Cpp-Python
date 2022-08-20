public class Pessoa {
  private String nome;
  private int idade;
  private String sexo;

  public void fazerAniversario(){
    this.setIdade(this.getIdade() + 1);
  }

  public int getIdade(){
    return this.getIdade();
  }

  public void setIdade(int idade){
    this.idade = idade;
  }

  public String getNome(){
    return this.nome;
  }

  public void setNome(String nome){
    this.nome = nome;
  }

  public String getSexo(){
    return this.sexo;
  }

  public void setSexo(String sexo){
    this.sexo = sexo;
  }

  @Override
  public String toString(){
    return "Pessoa( nome=" + this.nome + ", idade=" + this.idade + ", sexo=" + this.sexo;
  }
}