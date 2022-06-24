package flow;

import java.util.Scanner;

public class leapyear {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int year;
        System.out.println("Enter the year: ");
        year = scan.nextInt();
        if(year % 4 == 0) {
            System.out.println("Leap Year");
        }
        else {
            System.out.println("Not a leap year");
        }
    }
}
