package flow;

import java.util.Scanner;

public class multipli_table {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the  number whose multiplication table is to be printed: ");
        int n = scan.nextInt();
        for(int i=1;i<11;i++) {
            System.out.println(n+" x "+i+" = "+n*i);
        }
    }

}
