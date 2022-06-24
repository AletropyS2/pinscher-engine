#pragma once

#ifdef PS_PLATFORM_WINDOWS

extern Pinscher::Application* Pinscher::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Pinscher::CreateApplication();
	app->Run();
	delete app;
	return 1;
}

#endif