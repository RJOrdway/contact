#include <string>
#include <iostream>

using namespace std;

class person {
private:
    string firstName;
    family fam;
public:
    person()
};

class family {
private:
    string familyName;
    address home;
public:
    // name only
    family(string fn) {
        familyName = fn;
        home = address();
    }

    // name, city, state
    family(string fn, string c, string st) {
        familyName = fn;
        home = address(c, st);
    }

};

class address {
private:
    string street;
    string city;
    string state;
    string zip;
public:
    // default
    address() {
        street = "";
        city = "";
        state = "";
        zip = "";
    }

    // partial
    address(string c, string st) {
        street = "";
        city = c;
        state = st;
        zip = "";
    }

    // full constructor
    address(string s, string c, string st, string z) {
        street = s;
        city = c;
        state = st;
        zip = z;
    }


    void setStreet(string s) {street = s;}
    string getStreet() {return street;}

    void setCity(string c) {city = c;}
    string getCity() {return city;}

    void setState(string st) {state = st;}
    string getState() {return state;}

    void setZip(string z) {zip = z;}
    string getZip() {return zip;}
};