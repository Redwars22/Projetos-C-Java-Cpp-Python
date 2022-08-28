public class Aluno extends Pessoa {
  public int matricula;
  public String curso;

  public void setMatricula(int matricula) {
    this.matricula = matricula;
  }

  public int getMatricula() {
    return this.matricula;
  }

  public void setCurso(String curso) {
    this.curso = curso;
  }

  public String getCurso() {
    return this.curso;
  }

  public void pagarMensalidade() {
    System.out.println("A mensalidade do/da " + this.getNome() + " foi paga.");
  }
}