// André Pereira - RA 21006223 - Engenharia de Software
public class Main {
	public static void main(String[] args){
		Caneta caneta1 = new Caneta("BIC", 0.7f, "Azul");
		
		caneta1.status();
		System.out.println("A marca da minha caneta é " + caneta1.getModelo() + " " + caneta1.getPonta());
	}
}