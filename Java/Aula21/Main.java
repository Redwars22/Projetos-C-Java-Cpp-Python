class Main {
  public static void main(String[] args) {
    Lutador l[] = new Lutador[6];
    l[0] = new Lutador("Giovanni", "Itália", 19, 1.51, 68.9f, 13, 1, 1);
    l[1] = new Lutador("Gustavo", "Alemanha", 25, 1.57, 68.9f, 19, 7, 7);
    l[2] = new Lutador("Gabriel", "Polônia", 31, 1.63, 68.9f, 25, 7, 15);
    l[3] = new Lutador("Anthony", "Inglaterra", 37, 1.69, 68.9f, 31, 1, 21);
    l[4] = new Lutador("Allan", "Eslováquia", 43, 1.75, 68.9f, 37, 1, 27);
    l[5] = new Lutador("Andrew", "Rússia", 49, 1.81, 68.9f, 43, 7, 33);

    Luta luta = new Luta();
    luta.marcarLuta(l[0], l[1]);
    luta.lutar();
  }
}