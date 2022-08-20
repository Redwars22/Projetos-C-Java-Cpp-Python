public class Funcionario extends Pessoa {
  private String setor;
  private boolean trabalhando;

  public void mudarTrabalho(){
    this.trabalhando = !this.trabalhando;
  }
  
    public void setSetor(String setor){
    this.setor = setor;
  }

  public String getSetor(){
    return this.setor ;
  }

      public void setTrabalhando(boolean trabalhando){
    this.trabalhando = trabalhando;
  }

  public boolean getTrabalhando(){
    return this.trabalhando ;
  }
}