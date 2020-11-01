#include <Ripper.h>

class Sandbox : public Ripper::Application
{
public:

	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Ripper::Application* Ripper::create_application()
{
	return new Sandbox();
}