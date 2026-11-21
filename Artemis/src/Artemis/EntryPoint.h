#pragma once

#ifdef ATMS_PLATFORM_WINDOWS

extern Artemis::Application* Artemis::CreateApplication();

int main(int argc, char* argv[])
{
	auto app = Artemis::CreateApplication();
	app->Run();
	delete app;
}

#endif