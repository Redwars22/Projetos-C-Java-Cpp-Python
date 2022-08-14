public class Lutador {
  private String categoria, nome, nacionalidade;
  private int idade;
  private double altura, peso;
  private int vitorias, derrotas, empates;

  public Lutador(String nome, String nacionalidade, int idade, double altura, double peso, int vitorias, int derrotas,
      int empates) {
    this.nome = nome;
    this.nacionalidade = nacionalidade;
    this.idade = idade;
    this.altura = altura;
    // this.peso = peso;
    this.vitorias = vitorias;
    this.derrotas = derrotas;
    this.empates = empates;

    this.setPeso(peso);
  }

  public void perderLuta() {
    this.setDerrotas(getDerrotas() + 1);
  }

  public void ganharLuta() {
    this.setVitorias(getVitorias() + 1);
  }

  public void empatarLuta() {
    this.setEmpates(getEmpates() + 1);
  }

  public void apresentar() {
    System.out.println("---------------------------------------------------------------------");
    System.out.println("Lutador " + this.getNome() + ", de " + this.getNacionalidade() + ", com " + this.getIdade()
        + " anos de idade");
    System.out.println("Altura: " + this.getAltura() + "m, " + this.getPeso() + "kg");
    System.out.println(
        "VITÓRIAS: " + this.getVitorias() + " DERROTAS: " + this.getDerrotas() + " EMPATES: " + this.getEmpates());
    System.out.println("---------------------------------------------------------------------");
  }

  public void status() {
    System.out.println(this.getNome() + " pertencente à categoria " + this.getCategoria());
    System.out.println(
        "Ele/a ganhou " + this.getVitorias() + ", perdeu " + this.getDerrotas() + " e empatou " + this.getEmpates());
  }

  public String getCategoria() {
    return this.categoria;
  }

  private void setCategoria() {
    if (this.peso < 52.2) {
      this.categoria = "Inválido";
    } else if (this.peso <= 70.3) {
      this.categoria = "Leve";
    } else if (this.peso <= 83.9) {
      this.categoria = "Médio";
    } else if (this.peso <= 120.2) {
      this.categoria = "Pesado";
    } else {
      this.categoria = "Inválido";
    }
  }

  public String getNome() {
    return this.nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public double getAltura() {
    return this.altura;
  }

  public void setAltura(double altura) {
    this.altura = altura;
  }

  public double getPeso() {
    return this.peso;
  }

  public void setPeso(double peso) {
    this.peso = peso;
    this.setCategoria();
  }

  public int getVitorias() {
    return this.vitorias;
  }

  public void setVitorias(int vitorias) {
    this.vitorias = vitorias;
  }

  public int getEmpates() {
    return this.empates;
  }

  public void setEmpates(int empates) {
    this.empates = empates;
  }

  public int getDerrotas() {
    return this.derrotas;
  }

  public void setDerrotas(int derrotas) {
    this.derrotas = derrotas;
  }

  public int getIdade() {
    return this.idade;
  }

  public String getNacionalidade() {
    return this.nacionalidade;
  }
}