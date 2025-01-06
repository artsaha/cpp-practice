## Exercise 1: Grade Calculator

Write a C++ program that calculates the average grade of a student based on their scores in three subjects: Math, Science, and English. The program should:

Prompt the user to enter scores for each subject.
Calculate the average grade.
Display the average grade and a corresponding letter grade based on the following scale:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: 0-59

## Exercise 2: Basic Calculator

Write a C++ program that acts as a basic calculator. The program should prompt the user to enter two numbers (floating point) and an arithmetic operation (addition, subtraction, multiplication, or division). The program should then perform the requested operation and display the result.

Requirements:

1. Use appropriate C++ data types for variables.
2. Handle division by zero gracefully.

## Exercise 3: Bank Account Class

Create a BankAccount class that represents a simple bank account. The class should have the following features:

Private Members:

- accountNumber (int): Unique identifier for the account.
- balance (double): Current balance in the account.

Public Members:

- BankAccount() (Constructor): Initializes the accountNumber with a unique number (you can use a static counter for this) and sets the initial balance to 0.0.
- ~BankAccount() (Destructor): Displays a message indicating that the account is being closed.
- deposit(double amount): Adds the specified amount to the account's balance.
- withdraw(double amount): Subtracts the specified amount from the account's balance. Make sure not to allow withdrawals that would result in a negative balance.
- getBalance() const: Returns the current balance.
- static int getTotalAccounts(): Returns the total number of created bank accounts.

## Exercise 4: Complex Number Class

Create a Complex class to represent complex numbers. A complex number has a real part (denoted as real) and an imaginary part (denoted as imaginary). Implement the following functionalities in the class:

1. Constructor:

Implement a parameterized constructor that takes two arguments (real and imaginary parts) and initializes the complex number.

2. Copy Constructor:

Implement a copy constructor that creates a new complex number object by copying the values from another complex number.

3. Operator Overloading:

Overload the + operator to add two complex numbers.
Overload the * operator to multiply two complex numbers.
Overload the == operator to check if two complex numbers are equal.
Member Function:

Implement a member function display that displays the complex number in the format: real + imaginary*i.



## Exercise 5: Shape Hierarchy

Create a hierarchy of classes representing different shapes. The base class should be Shape, and it should have two virtual functions: area() and display(). Implement the following derived classes:

1. Circle:

Derived from Shape.
Should have a member variable for the radius.
Implement the area() function to calculate the area of the circle.
Implement the display() function to print information about the circle.

2. Rectangle:

Derived from Shape.
Should have member variables for the length and width.
Implement the area() function to calculate the area of the rectangle.
Implement the display() function to print information about the rectangle.

3. Triangle:

Derived from Shape.
Should have member variables for the base and height.
Implement the area() function to calculate the area of the triangle.
Implement the display() function to print information about the triangle.

In the main function, create an array of pointers to Shape objects that includes instances of Circle, Rectangle, and Triangle. Demonstrate polymorphism by calling the area() and display() functions on objects of the base class using pointers to the derived classes.

## Exercise 6: Vehicle Fleet Management System

Objective:
Develop a C++ program to manage a fleet of vehicles using classes, inheritance, and operator overloading.
 
Background:
A vehicle fleet management system is a software application that helps a company or organization track and manage their vehicles. This exercise simulates a simplified version of such a system.
 
Tasks:
Define a Base Class - Vehicle:
 
Attributes: make (string), model (string), year (int), mileage (double).
Methods: Constructor, getters and setters for each attribute, a virtual method displayInfo() to print vehicle information, and a virtual destructor.
Create Derived Classes:
 
Car: Inherits from Vehicle. Additional attributes could include bodyStyle (e.g., sedan, hatchback).
Truck: Inherits from Vehicle. Additional attributes could include maxLoadCapacity (double).
Override the displayInfo() method in each derived class to display specific attributes alongside the base class attributes.
 
Implement Operator Overloading:
Overload the << operator to output the details of each vehicle type. This should call the displayInfo() method internally.
Overload the == operator to compare two vehicles. Vehicles are considered equal if their make, model, and year are the same.
 
Create a Fleet Class:
Attributes: A collection of Vehicle pointers (use a vector or array).
Methods: Add new vehicles to the fleet, remove vehicles, find vehicles by different criteria (e.g., by make, by year), and display information about all vehicles.
 
Write a main() function that creates a number of different vehicles, adds them to the fleet, and exercises the various methods available.