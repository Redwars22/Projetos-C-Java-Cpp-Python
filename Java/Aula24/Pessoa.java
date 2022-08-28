public abstract class Pessoa {
  private String nome;
  private int idade;
  private char sexo;

  public void setNome(String nome) {
    this.nome = nome;
  }

  public String getNome() {
    return this.nome;
  }

  public void setIdade(int idade) {
    this.idade = idade;
  }

  public int getIdade() {
    return this.idade;
  }

  public void setSexo(char sexo) {
    this.sexo = sexo;
  }

  public char getSexo() {
    return this.sexo;
  }

  public void fazerAniversario(){
    this.setIdade(this.getIdade() + 1);
  }
}