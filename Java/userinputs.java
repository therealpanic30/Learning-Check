import java.util.Scanner;
public class userinputs {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.println("What is your name: ");
        String name = scan.nextLine();
        System.out.println("Hello "+name);

        System.out.println("Whats your age "+name);
        int age= scan.nextInt();
        System.out.println(name+" is "+age+" years old");

        System.out.println("Are you Employeed?");
        boolean emp = scan.nextBoolean();
        System.out.println("So you being employeed is "+emp);

        scan.nextLine();

        System.out.println("What is your favorite food: ");
        String food = scan.nextLine();
        System.out.println(name+" likes "+food);

    }
    
}
