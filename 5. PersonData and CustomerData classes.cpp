Design a class named PersonData with the following member variables:
- lastName 
- firstName
- address
- city
- state
- zip
- phone 
Write the appropriate accessor and mutator functions for these member variables. Next, design a class 
named CustomerData, which is derived from the PersonData class. The CustomerData class should 
have the following member variables: 
- customerNumber 
- mailingList 
The customerNumber variable will be used to hold a unique integer for each customer. The 
mailingList variable should be a bool. It will be set to true if the customer wishes to be on a mailing 
list, or false if the customer does not wish to be on a mailing list. Write appropriate accessor and mutator 
functions for these member variables. Demonstrate an object of the CustomerData class in a simple 
program.

#ifndef PersonData_H
#define PersonData_H

#include <string>
#include <iostream>



class PersonData 
{
private:
	std::string lastName;
	std::string firstName;
	std::string address;
	std::string city;
	std::string state;
	std::string zipCode;
        std::string phoneNum;

public:
	PersonData();
	~PersonData();
	PersonData(std::string last, std::string first, std::string address, std::string city, std::string s, std::string zip, std::string phone);


	//Accessors
	void setlastName(std::string last);
	void setfirstName(std::string first);
	void setaddress(std::string add);
	void setcity(std::string c);
	void setstate(std::string s);
	void setzipCode(std::string zip);
	void setphoneNum(std::string phone);

	//Mutators

	std::string getlastName();
	std::string getfirstName();
	std::string getaddress();
	std::string getcity();
	std::string getstate();
	std::string getzipCode();
	std::string getphoneNum();

};
#endif // !PersonData_H;

#include "stdafx.h"
#include "PersonData.h"


PersonData::PersonData()
 :lastName(""),firstName(""), address(""), state(""),city(""), zipCode(""), phoneNumber("")
{

}


PersonData::~PersonData()
{
}

PersonData::PersonData(std::string last, std::string first, std::string add, std::string c, std::string s, std::string zip, std::string phone)
 :lastName(last), firstName(first), address(add), city( c), state( s),	zipCode (zip), phoneNum( phone)
{
	
}

void PersonData::setlastName(std::string last)
{
	lastName = last;
}

void PersonData::setfirstName(std::string first)
{
	firstName = first;
}

void PersonData::setaddress(std::string add)
{
	address = add;
}

void PersonData::setcity(std::string c)
{
	city = c;
}

void PersonData::setstate(std::string s)
{
	state = s;
}

void PersonData::setzipCode(std::string zip)
{
	zipCode = zip;
}

void PersonData::setphoneNum(std::string phone)
{
	phoneNum = phone;
}

std::string PersonData::getlastName()
{

	return lastName;
}

std::string PersonData::getfirstName()
{
	return firstName;
}

std::string PersonData::getaddress()
{
	return address;
}

std::string PersonData::getcity()
{
	return city;
}

std::string PersonData::getstate()
{
	return state;
}

std::string PersonData::getzipCode()
{
	return zipCode;
}

std::string PersonData::getphoneNum()
{
	return phoneNum;
}

#pragma once
#ifndef CustomerData_H
#define CustomerData_H


#include "PersonData.h"



class CustomerData : public PersonData
{
private: 
	int customerNUM;
	bool mailingList;
public:
	CustomerData();
	CustomerData(std::string last, std::string first, std::string add, std::string c, std::string s, std::string zip,std::string phone, int custNUM, bool mail);
	

	//Accessors
	void setcustomerNUM(int custNUM);
	void setmailingList(bool mail);
	//Mutators
	int getcustomerNUM();
	bool getmailingList();
};
#endif // !CustomerData_H;

#include "stdafx.h"
#include "CustomerData.h"
#include "PersonData.h"



CustomerData::CustomerData()
 : personData() , customerNUM ( 0),mailingList( false)
{
	
}


CustomerData::CustomerData(std::string last, std::string first, std::string add, std::string c, std::string s, std::string zip,std::string phone, int custNUM, bool mail)
 : personData(last,first,add,c,s,zip,phone), customerNUM(custNUM), mailingList(mail)
{

}

void CustomerData::setcustomerNUM(int custNUM)
{
	customerNUM = custNUM;
}

void CustomerData::setmailingList(bool mail)
{
	mailingList = mail;
}

int CustomerData::getcustomerNUM()
{
	return customerNUM;
}

bool CustomerData::getmailingList()
{
	return mailingList;
}

#include "stdafx.h"
#include "CustomerData.h"

void displayCUSTOMER(CustomerData C); //function used to display the customer information from an instance of CustomerData



int main()
{
	CustomerData defaultCON; //object relates to the default constructor in CustomerData

defaultCon.setlastName("adria");
defaultCon.setfirstName("McRey");
defaultCon.setaddress("0874784784");
defaultCon.setcity("L.A");
defaultCon.setstate("California");
defaultCon.setzipCode("00000");
defaultCon.setphoneNum("1234567");
defaultCon.setcustomerNUM(5555);
defaultCon.setmailingList(true);

							 //object uses the second constructor in Customer Data to populate the information fields. 
	CustomerData info("Smith", "Joan", "123 Main Street", "Smithville", "NC", "99999", 12345, true);

	std::cout << " Customer #1 \n";
	std::cout << " ____________ \n";
	displayCUSTOMER(defaultCON);
	std::cout << " Customer #2 \n";
	std::cout << " ____________ \n";
	displayCUSTOMER (info);

    return 0;
}

void displayCUSTOMER(CustomerData C)
{
	std::cout << " Last Name: " << C.getlastName() << std::endl; 
std::	cout << " First Name: " << C.getfirstName() << std::endl;
	std::cout << " Address: " << C.getaddress() << std::endl;
	std::cout << " State: " << C.getstate() << std::endl;
	std::cout << " City: " << C.getcity() << std::endl;
	std::cout << " Zip: " << C.getzipCode() << std::endl;
	std::cout << " Customer Number: " << C.getcustomerNUM() << std::endl;
	std::cout << " Mailing List? " << C.getmailingList() << std::endl;
}
