package com.lit.workers;

public class Demo {
    public static void main(String[] args) {
        // create instance of employee
        Employee employee = new Employee();
        System.out.println("Name: "+employee.getName());
        System.out.println("Address: "+employee.getAddress());
        System.out.println("Main Role: "+employee.getMainRole());
        System.out.println("Salary: "+employee.getSalary());
    }
}
// employee class
class Employee {
    String name = "Mark";
    String address = "1234 Main Str";
    String mainRole = "Analyst";
    int salary = 100;
    // getter and setter for name
    public String getName(){
        return name;
    }
    public String setName(String name) {
        this.name = name;
        return name;
    }
    // getter and setter for address
    public String getAddress(){
        return address;
    }
    public String setAddress(String address) {
        this.address = address;
        return name;
    }
    // getter and setter for mainRole
    public String getMainRole(){
        return mainRole;
    }
    public String setMainRole(String mainRole) {
        this.mainRole = mainRole;
        return mainRole;
    }
    // getter and setter for salary
    public int getSalary(){
        return salary;
    }
    public void setSalary(int salary) {
        this.salary = salary;
    }
}