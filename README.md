InheritancePractice
===================
Designed and implemented classes of an inheritance hierarchy for Employee, Boss, HourlyWorker, and CommissionWorker as specified here:

(1) Employee is a base class containing the interface to the hierarchy (note: this could be designed as an abstract class.) It has the following private data members: first name, last name, birthday, and department code, where the department code is one of the Accounting, Purchasing, Marketing, Manufacturing, and Management departments. Use string objects for the names. The class has constructor(s), a destructor and other necessary member functions. It has two virtual functions, one is earning function that calculates and returns the employee’s earning, and another print function that employee’s information including his/her earnings. You may define a friend function that overloads << for displaying the Employee object information (i.e. the overloading << function will call the virtual print function.)

(2) Boss class inherits from the Employee class with additional information of monthly salary. It defines its own earning and print functions.

(3) Hourlyworker class inherits from the Employee class with additional information of hourly rate and hours worked in this month. It defines its own earning and print functions.

(4) CommissionWorker class inherits from the Employee class with additional information of base salary, items sold for the month, and commission per each item. It defines its own earning and print functions.

Also, design and implement a Date class with the following requirements: (1) a default constructor that sets the Date object to the first day of year 2000, and (2) a constructor with month, day, and year either passed as parameter or inputted by the user with all information verified – month should be in the range from 1 to 12, year should be greater than 1900, and day should be in the range from 1 to 31 depending on the corresponding month (note: ignore the leap year.) If parameter values are out of range, set the date to first day of year 2000. Other member functions include getMonth, getDay, getYear, etc. Also, use a friend function to overload an operator function << for output of Date object.

Main function: (1) user enters today’s day; (2) it calculates the payroll for each employee and add $500.00 bonus to the person's payroll amount if this is the month in which the employee's birthday occurs; and (3) prints out the payroll for each employee of this month. Run the main program and test your member functions thoroughly. 
