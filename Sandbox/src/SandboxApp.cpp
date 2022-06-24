#include <Pinscher.h>

class Sandbox : public Pinscher::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Pinscher::Application* Pinscher::CreateApplication()
{
	return new Sandbox();
}