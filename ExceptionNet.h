using namespace System;

public ref class HeroHPNet: public System::Exception {
	String^ message;

public:
	HeroHPNet() :message("Вы умерли! Здоровье: 0!") {}
	HeroHPNet(String^ _message) : message(_message) {}

	String^ what() {
		return message;
	}
};