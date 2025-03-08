import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean repeat = true;

        while (repeat) {
            System.out.print("Enter an integer: ");
            int number = scanner.nextInt();
            scanner.nextLine();

            if (number % 2 == 0) {
                System.out.println("This number is even");
            } else {
                System.out.println("This number is odd");
            }

            System.out.print("Continue? (Y/N): ");
            String response = scanner.nextLine();


            if (response.equals("N")) {
                repeat = false;
            } else if (response.equals("Y")) {
                repeat = true;
            } else {
                System.out.println("Please enter Y or N");
                System.out.print("Continue? (Y/N): ");
                response = scanner.nextLine();
            }
        }

        scanner.close();
    }
}