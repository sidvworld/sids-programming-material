import java.util.Scanner;  // Import the Scanner class
class Vehicle {
    // variables (non-primitive)
    public String carName;
    public double totalDistanceTravelled;
    public double totalFuelConsumed;


    // constructor
    public Vehicle(String carName) {
        this.carName = carName;
    }

    // calculate mileage
    public double calculateMileage() {
        return totalDistanceTravelled/totalFuelConsumed;
    }

    // calculate fuel needed for X distance
    public void requiredFuel(double distance) {
        double requiredFuel = distance / calculateMileage();
        System.out.println("Distance: " + distance + " Required Fuel: " + requiredFuel);
    }

}

public class Car {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);  // Create a Scanner object
        // user input for vehicle 1
        Vehicle vehicle1 = new Vehicle("V1");
        System.out.println("Vehicle 1:");
        System.out.print("Name: ");
        vehicle1.carName = scanner.nextLine();
        System.out.print("Total distance traveled: ");
        vehicle1.totalDistanceTravelled = scanner.nextDouble();
        System.out.print("Total fuel consumed: ");
        vehicle1.totalFuelConsumed = scanner.nextDouble();
        //user input for vehicle 2
        Vehicle vehicle2 = new Vehicle("V2");
        System.out.println("Vehicle 2:");
        System.out.print("Name: ");
        scanner.nextLine();
        vehicle2.carName = scanner.nextLine();
        System.out.print("Total distance traveled: ");
        vehicle2.totalDistanceTravelled = scanner.nextDouble();
        System.out.print("Total fuel consumed: ");
        vehicle2.totalFuelConsumed = scanner.nextDouble();
        /// user input for vehicle 3
        Vehicle vehicle3 = new Vehicle("V3");
        System.out.println("Vehicle 3:");
        System.out.print("Name: ");
        scanner.nextLine();
        vehicle3.carName = scanner.nextLine();
        System.out.print("Total distance traveled: ");
        vehicle3.totalDistanceTravelled = scanner.nextDouble();
        System.out.print("Total fuel consumed: ");
        vehicle3.totalFuelConsumed = scanner.nextDouble();

        // Print name and mileage for each vehicle
        System.out.println("Vehicle 1: " + vehicle1.carName + " Mileage: " + vehicle1.calculateMileage());
        System.out.println("Vehicle 2: " + vehicle2.carName + " Mileage: " + vehicle2.calculateMileage());
        System.out.println("Vehicle 3: " + vehicle3.carName + " Mileage: " + vehicle3.calculateMileage());

        // user input for required fuel method
        System.out.print("Enter Distance to calculate required fuel: ");
        double distance = scanner.nextDouble();
        vehicle1.requiredFuel(distance);
        vehicle2.requiredFuel(distance);
        vehicle3.requiredFuel(distance);

        scanner.close();
}
}
