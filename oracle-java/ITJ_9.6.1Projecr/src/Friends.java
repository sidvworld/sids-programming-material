import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.function.Function;

class Friend {
    private String name;
    private LocalDate birthday;

    // Constructor
    public Friend(String name, LocalDate birthday) {
        this.name = name;
        this.birthday = birthday;
    }

    // Getter methods
    public String getName() {
        return name;
    }

    public LocalDate getBirthday() {
        return birthday;
    }
}

public class Friends {
    public static void main(String[] args) {
        ArrayList<Friend> friendsList = new ArrayList<>();

        // Populate the list of friends at runtime
        // counter increases after every loop
        for (int i = 0; i < 5; i++) {
            Scanner scanner = new Scanner(System.in);
            // Name of friend
            System.out.println("Enter name of friend " + (i + 1) + ":");
            String name = scanner.nextLine();

            // Birth year of friend
            System.out.println("Enter birth year of friend " + (i + 1) + ":");
            int year = scanner.nextInt();

            // Birth month of friend
            System.out.println("Enter birth month (1-12) of friend " + (i + 1) + ":");
            int month = scanner.nextInt();

            // Birthday of friend
            System.out.println("Enter birth day of friend " + (i + 1) + ":");
            int day = scanner.nextInt();

            LocalDate birthday = LocalDate.of(year, month, day);

            friendsList.add(new Friend(name, birthday));
        }

        // Print the names, birthdays, and ages of all friends
        System.out.println("Friends List:");
        friendsList.forEach(friend -> {
            System.out.println("Name: " + friend.getName());
            System.out.println("Birthday: " + friend.getBirthday());
            System.out.println("Age: " + computeAge.apply(friend.getBirthday()));
            System.out.println();
        });
    }

    // Lambda expression to calculate age
    static Function<LocalDate, Integer> computeAge = birthDate -> LocalDate.now().getYear() - birthDate.getYear();
}