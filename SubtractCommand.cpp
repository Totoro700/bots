#include "BotFlipConfig.cpp";
#include "Command.cpp";

class SubtractCommand : public Command
{
	// Public
public:
	// Functions
	// Description
	string description() override {
		return "Subtracts two numbers";
	};

	// Name
	string name() override {
		return "subtract";
	};

	// Run
	void run() override {
		try
		{
			cout << "Number one to subtract?\n";
			cin >> this->getConfig()->numOne;
			cout << "Number two to subtract?\n";
			cin >> this->getConfig()->numTwo;
			cout << this->getConfig()->numOne - this->getConfig()->numTwo;
			cout << "\n";
		}
		catch (...)
		{
			e();
		}
	}

	// Because we have virtual functions, we need a virtual destructor
	virtual ~SubtractCommand() {

	};

};