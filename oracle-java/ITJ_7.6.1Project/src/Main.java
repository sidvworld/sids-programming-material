import java.util.Scanner;

// Interface for generic electronic devices
interface Electronic {}

// Interface for computer specifications
interface Computer {
    void displaySpecs();
}

// Abstract class for laptops
abstract class Laptops implements Electronic {
    String model;

    // Constructor
    public Laptops(String model) {
        this.model = model;
    }

    // Abstract method
    abstract void displayType();

    // Non-abstract method
    void displayModel() {
        System.out.println("Model: " + model);
    }
}

// Abstract class for desktops
abstract class Desktops implements Electronic {
    String model;

    // Constructor
    public Desktops(String model) {
        this.model = model;
    }

    // Abstract method
    abstract void displayType();

    // Non-abstract method
    void displayModel() {
        System.out.println("Model: " + model);
    }
}

// Implementation of Student Laptop
class StudentLaptop extends Laptops implements Computer {
    public StudentLaptop(String model) {
        super(model);
    }

    @Override
    void displayType() {
        System.out.println("Type: Student Laptop");
    }

    @Override
    public void displaySpecs() {
        displayType();
        displayModel();
        System.out.println("Specifications: 4GB RAM, 256GB SSD");
    }
}

// Implementation of Gaming Laptop
class GamingLaptop extends Laptops implements Computer {
    public GamingLaptop(String model) {
        super(model);
    }

    @Override
    void displayType() {
        System.out.println("Type: Gaming Laptop");
    }

    @Override
    public void displaySpecs() {
        displayType();
        displayModel();
        System.out.println("Specifications: 16GB RAM, 512GB SSD, Dedicated GPU");
    }
}

// Implementation of Office Desktop
class OfficeDesktop extends Desktops implements Computer {
    public OfficeDesktop(String model) {
        super(model);
    }

    @Override
    void displayType() {
        System.out.println("Type: Office Desktop");
    }

    @Override
    public void displaySpecs() {
        displayType();
        displayModel();
        System.out.println("Specifications: 8GB RAM, 1TB HDD, Intel Core i5");
    }
}

// Implementation of Gaming Desktop
class GamingDesktop extends Desktops implements Computer {
    public GamingDesktop(String model) {
        super(model);
    }

    @Override
    void displayType() {
        System.out.println("Type: Gaming Desktop");
    }

    @Override
    public void displaySpecs() {
        displayType();
        displayModel();
        System.out.println("Specifications: 16GB RAM, 512GB SSD, Nvidia RTX 3060");
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Electronic electronic = null;

        System.out.println("Enter the number of the device you want:");
        System.out.println("1: Student Laptop");
        System.out.println("2: Gaming Laptop");
        System.out.println("3: Office Desktop");
        System.out.println("4: Gaming Desktop");
        System.out.print("Enter your choice: ");
        int choice = scanner.nextInt();

        switch (choice) {
            case 1:
                electronic = new StudentLaptop("Asus VivoBook");
                break;
            case 2:
                electronic = new GamingLaptop("MSI GL65");
                break;
            case 3:
                electronic = new OfficeDesktop("Dell Inspiron");
                break;
            case 4:
                electronic = new GamingDesktop("Alienware Aurora");
                break;
            default:
                System.out.println("Invalid choice!");
                break;
        }

        if (electronic != null && electronic instanceof Computer) {
            Computer computer = (Computer) electronic;
            computer.displaySpecs();
        }

        scanner.close();
    }
}