public class Aluno extends Pessoa {
  private int matricula;
  private String curso;

  public void cancelarMatricula(){
    System.out.println("A matrícula foi cancelada!");
  }
  
  public void setMatricula(int RA){
    this.matricula = RA;
  }

  public int getMatricula(){
    return this.matricula;
  }

  public String getCurso(){
    return this.curso;
  }

  public void setCurso(String curso){
    this.curso = curso;
  }
}