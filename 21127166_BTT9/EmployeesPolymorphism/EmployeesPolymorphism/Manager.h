#pragma once
#include "Employee.h"

class Manager : public Employee {
private:
	int _employeeCount; // number of managed employees
	int _paymentPerEmployee;
	int _baseSalary; //fixed base payment per month

public:
	Manager();
	Manager(int, int, int) noexcept(false);

public:
	int getEmployees() { return this->_employeeCount; }
	int getPayment() { return this->_paymentPerEmployee; }
	int getBaseSalary() { return this->_baseSalary; }
	void setEmployees(int employeeCount) { this->_employeeCount = employeeCount; }
	void setPayment(int paymentPerEmployee) { this->_paymentPerEmployee = paymentPerEmployee; }
	void setBaseSalary(int baseSalary) { this->_baseSalary = baseSalary; }

public:
	string toString();
	int salary();

};