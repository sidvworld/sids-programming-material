import java.util.Random;

class Dice {
    private Random random;

    public Dice() {
        random = new Random();
    }

    public int roll(){
        return random.nextInt(6)+1;
    }
}

public class Main {
    //array for the lines of the story
    private static String[] lines = {
            "A guy named Marc worked in a grocery store. ",
            "Marc really likes soccer, and he plays for a team. ",
            "Marc's teammates don't like him, but he pushed himself to be the best. ",
            "Marc got selected from a major soccer academy, and his teammates despised him. ",
            "Marc did not take this opportunity for granted, and continued to work hard. ",
            "Marc went from the grocery store to becoming one of the best wingers in the Premier League; this is the story of Marcus Rashford."
    };

    public static void main(String[] args) {
        //two dice objects
        Dice player1Dice = new Dice();
        Dice player2Dice = new Dice();
        //create the index of the story (the line on which the story is on)
        int index = 0;

        //while the story is still continuing, meaning that all 6 lines have not been printed
        while (index <= 6) {
            //create both players roll
            int player1Roll = player1Dice.roll();
            int player2Roll = player2Dice.roll();
            //find player 1's roll + player 2's roll
            int number = player1Roll + player2Roll;

            //if their rolls together are greater than 10
            if (number>10){
                //print the line of the story that the index is on
                System.out.println(lines[index]);
                //add one to the index
                index++;
            }
        }
    }
}