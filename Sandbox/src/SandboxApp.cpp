#include <Artemis.h>

class Sandbox : public Artemis::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Artemis::Application* Artemis::CreateApplication()
{
	return new Sandbox();
}