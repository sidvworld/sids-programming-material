import java.util.Arrays;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        String[] countries = new String[] {"the USA", "France", "India", "Japan", "Mexico", "Egypt"};
        String[] features = new String[] {"great nature", "amazing history", "a robust culture", "mind-blowing technology", "a friendly society", "beautiful architecture"};
        int[] kilometers = new int[] {15, 5, 20, 10, 25, 30};
        String[] direction = new String[] {"east", "west", "north", "north west", "south", "south east"};
        String[] foods = new String[] {"hamburgers", "crepes", "curry", "sushi", "tacos", "falafel"};

        System.out.print("Please enter 5 numbers from 1-100: ");


        int countriesInput = scanner.nextInt();
        if (countriesInput<=10){
            countriesInput=1;
        }
        if (countriesInput==100){
            countriesInput=1;
        }
        else{
            int tens_place = countriesInput / 10;
            int ones_place = countriesInput % 10;

            countriesInput = (tens_place + ones_place)/2;
        }


        int featuresInput = scanner.nextInt();
        if (featuresInput<=10){
            featuresInput=1;
        }
        if (featuresInput==100){
            featuresInput=1;
        }
        else{
            int tens_place = featuresInput / 10;
            int ones_place = featuresInput % 10;

            featuresInput = (tens_place + ones_place)/2;
        }

        int kilometersInput = scanner.nextInt();
        if (kilometersInput<=10){
            kilometersInput=1;
        }
        if (kilometersInput==100){
            kilometersInput=1;
        }
        else{
            int tens_place = kilometersInput / 10;
            int ones_place = kilometersInput % 10;

            kilometersInput = (tens_place + ones_place)/2;
        }


        int directionInput = scanner.nextInt();
        if (directionInput<=10){
            directionInput=1;
        }
        if (directionInput==100){
            directionInput=1;
        }
        else{
            int tens_place = directionInput / 10;
            int ones_place = directionInput % 10;

            directionInput = (tens_place + ones_place)/2;
        }

        int month = (scanner.nextInt()) % 13;
        if (month==0){
            month=1;
        }

        switch (month) {
            case 1:
                System.out.print("This January, you should visit " + countries[countriesInput] + ". I heard " + countries[countriesInput] + " has " + features[countriesInput] + ". If you go " + kilometers[kilometersInput] + " kilometers " + direction[directionInput] + " from the capitol, you can enjoy this popular food called " + foods[countriesInput] + ".");
                break;

            case 2:
                System.out.print("This February, you should visit " + countries[countriesInput] + ". I heard " + countries[countriesInput] + " has " + features[countriesInput] + ". If you go " + kilometers[kilometersInput] + " kilometers " + direction[directionInput] + " from the capitol, you can enjoy this popular food called " + foods[countriesInput] + ".");
                break;

            case 3:
                System.out.print("This March, you should visit " + countries[countriesInput] + ". I heard " + countries[countriesInput] + " has " + features[countriesInput] + ". If you go " + kilometers[kilometersInput] + " kilometers " + direction[directionInput] + " from the capitol, you can enjoy this popular food called " + foods[countriesInput] + ".");
                break;

            case 4:
                System.out.print("This April, you should visit " + countries[countriesInput] + ". I heard " + countries[countriesInput] + " has " + features[countriesInput] + ". If you go " + kilometers[kilometersInput] + " kilometers" + direction[directionInput] + " from the capitol, you can enjoy this popular food called " + foods[countriesInput] + ".");
                break;

            case 5:
                System.out.print("This May, you should visit " + countries[countriesInput] + ". I heard " + countries[countriesInput] + " has " + features[featuresInput] + ". If you go " + kilometers[kilometersInput] + " kilometers " + direction[directionInput] + " from the capitol, you can enjoy this popular food called " + foods[countriesInput] + ".");
                break;

            case 6:
                System.out.print("This June, you should visit " + countries[countriesInput] + ". I heard " + countries[countriesInput] + " has " + features[featuresInput] + ". If you go " + kilometers[kilometersInput] + "kilometers " + direction[directionInput] + " from the capitol, you can enjoy this popular food called" + foods[countriesInput] + ".");
                break;

            case 7:
                System.out.print("This February, you should visit " + countries[countriesInput] + ". I heard " + countries[countriesInput] + " has " + features[featuresInput] + ". If you go " + kilometers[kilometersInput] + "kilometers " + direction[directionInput] + " from the capitol, you can enjoy this popular food called" + foods[countriesInput] + ".");
                break;
        }



    }
}