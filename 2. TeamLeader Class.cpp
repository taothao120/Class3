
/*In a particular factory, a team leader is an hourly paid production worker who leads a small team. In 
addition to hourly pay, team leaders earn a fixed monthly bonus. Team leaders are required to attend a 
minimum number of hours of training per year. Design a TeamLeader class that extends the 
ProductionWorker class you designed in Problem 1. The TeamLeader class should have member 
variables for the monthly bonus amount, the required number of training hours, and the number of 
training hours that the team leader has attended. Write one or more constructors and the appropriate 
accessor and mutator functions for the class. Demonstrate the class by writing a program that uses a 
TeamLeader object*/

#include <iostream>
#include <string>
using namespace std;

class ProductionWorker {
private:
    int shift;
    double pay_rate;

public:
    ProductionWorker() {}
    
    ProductionWorker(int shift, double pay_rate) {
        this->shift = shift;
        this->pay_rate = pay_rate;
    }
    
    void set_shift(int shift) {
        this->shift = shift;
    }
    
    void set_pay_rate(double pay_rate) {
        this->pay_rate = pay_rate;
    }
    
    int get_shift() const {
        return shift;
    }
    
    double get_pay_rate() const {
        return pay_rate;
    }
};

class TeamLeader : public ProductionWorker {
private:
    double bonus;
    int required_training_hours;
    int attended_training_hours;

public:
    TeamLeader() {}
    
    TeamLeader(int shift, double pay_rate, double bonus,
               int required_training_hours, int attended_training_hours) :
               ProductionWorker(shift, pay_rate) {
        this->bonus = bonus;
        this->required_training_hours = required_training_hours;
        this->attended_training_hours = attended_training_hours;
    }
    
    void set_bonus(double bonus) {
        this->bonus = bonus;
    }
    
    void set_required_training_hours(int required_training_hours) {
        this->required_training_hours = required_training_hours;
    }
    
    void set_attended_training_hours(int attended_training_hours) {
        this->attended_training_hours = attended_training_hours;
    }
    
    double get_bonus() const {
        return bonus;
    }
    
    int get_required_training_hours() const {
        return required_training_hours;
    }
    
    int get_attended_training_hours() const {
        return attended_training_hours;
    }
};

int main() {
    // Create a TeamLeader object with the given information
    TeamLeader leader(1, 12.50, 100.00, 20, 10);
    
    // Print out the leader's information
    cout << "Shift: " << leader.get_shift() << endl;
    cout << "Pay Rate: " << leader.get_pay_rate() << endl;
    cout << "Bonus: " << leader.get_bonus() << endl;
    cout << "Required Training Hours: " << leader.get_required_training_hours() << endl;
    cout << "Attended Training Hours: " << leader.get_attended_training_hours() << endl;
    
    // Change the leader's information
    leader.set_bonus(150.00);
    leader.set_required_training_hours(30);
    leader.set_attended_training_hours(25);
    
    // Print out the updated information
    cout << "Updated Bonus: " << leader.get_bonus() << endl;
    cout << "Updated Required Training Hours: " << leader.get_required_training_hours() << endl;
    cout << "Updated Attended Training Hours: " << leader.get_attended_training_hours() << endl;
    
    return 0;
}
