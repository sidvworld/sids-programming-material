import java.util.Random;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        // to indicate which round
        int round = 1;

        //to indicate how many guesses the user has
        int guesses = 0;

        // to indicate user score
        int score = 0;

        //array to store the correctly guessed numbers
        int[] guessedCorrectly = new int[5];

        // while the score is less than 5 AND the guesses also have to be less than 25
        while (score < 5 && guesses < 25) {
            // random number from 1-10
            int number = random.nextInt(10);

            // print the round and get the user input
            System.out.println("Round " + round+ ":");
            System.out.println("Guess a number from 1 to 10");
            int guess = scanner.nextInt();
            // add a guess
            guesses++;

            // if the guess is correct
            if (guess == number) {
                guessedCorrectly[score] = guess;
                score++;
                System.out.println(("Correct. Your score is: " + score));
                System.out.println("Guesses left: " + (25 - guesses));
                round++;
            }
            // if the guess is incorrect
            else {
                System.out.println("Incorrect. Guesses left: " + (25 - guesses));
            }
        }

        // for loop to display the array of answers to the correctly guessed rounds
        System.out.println("Correct guesses: ");
        for (int i = 0; i < score; i++) {
            System.out.println(guessedCorrectly[i]);
        }

        // condition to win the game
        if (score == 5) {
            System.out.println("You reached 5 points. You won.");

        }
        // when the guess count is over 25
        else {
            System.out.println("You have reached the max number of guesses.");
        }
        scanner.close();
    }
}