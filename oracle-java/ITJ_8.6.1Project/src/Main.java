import java.util.Scanner;

// Custom Exception class MarginScoreException
class MarginScoreException extends Exception {
    // Override toString() method to provide custom message
    @Override
    public String toString() {
        return "You scored 40. Exceptional!";
    }
}

// Main class
public class Main {
    // Method to check if the score is passing, failing, or exceptional
    public static void checkScore(int score) {
        try {
            if (score < 40) {
                System.out.println("You failed! Score: " + score);
            } else if (score == 40) {
                throw new MarginScoreException();
            } else {
                System.out.println("You passed! Score: " + score);
            }
        } catch (MarginScoreException e) {
            // Handle MarginScoreException
            System.out.println(e);
        } catch (ArithmeticException e) {
            // Handle ArithmeticException if score is 0
            System.out.println("You scored 0 - ArithmeticException");
        } catch (Exception e) {
            // Ignore other exceptions
        } finally {
            // Print a remark for every student
            System.out.println("Good job, try harder next time!");
        }
    }

    // Main method
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int score = scanner.nextInt();
        checkScore(score);
    }
}