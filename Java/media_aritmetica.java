import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("##########[ CALCULADORA DE MÉDIA EM JAVA ]##########");
        while(true){
            Scanner readNum = new Scanner(System.in);
            System.out.print("Quantidade de elementos: ");
            int elements = readNum.nextInt();
            String average = getValues(elements);
            System.out.print("A média é: " + average + "\n\n");
        }
    }

    public static String getValues(int arg){
        int total = 0;
        Scanner readVal = new Scanner(System.in);
        for(int i = 0; i < arg; i++){
            System.out.print("x" + String.valueOf(i + 1) + ": ");
            total += readVal.nextInt();
        }
        return(String.valueOf(calculateAverage(total, arg)));
    }
    
    public static int calculateAverage(int total, int elements){
        return (total/elements);
    }
}
