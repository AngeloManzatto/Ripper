#pragma once

#ifdef RP_PLATFORM_WINDOWS

extern Ripper::Application* Ripper::create_application();

int main(int argc, char** argv)
{
	auto app = Ripper::create_application();
	app->run();
	delete app;
}

#endif // RP_PLATFORM_WINDOWS
