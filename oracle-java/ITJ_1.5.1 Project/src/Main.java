public class Main {
// main method
    public static void main(String[] args) {
        // create instant of continents
        Continents continents = new Continents();
        // print biggest continent, pre initialized as Asia
        System.out.println("Biggest Continent: " + continents.getBiggestContinent());
        // set number of countries to 100
        continents.setNumberOfCountries(100);
        // print number of countries
        System.out.println("Countries: " + continents.getNumberOfCountries());
    }

}

// continents class
class Continents {
    // string data for biggest continent
    String biggestContinent="Asia";
    // integer data for number of countries
    int numberOfCountries;

    // method to get the biggest continent
    public String getBiggestContinent() {return biggestContinent;}

    // method to get the number of countries
    public int getNumberOfCountries() {return numberOfCountries;}

    // method to set the number of countries.
    public void setNumberOfCountries(int numberOfCountries) {
        this.numberOfCountries = numberOfCountries;
    }

}
