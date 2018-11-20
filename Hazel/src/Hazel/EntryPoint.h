#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	LOG_CORE_WARN("Engine Ready");
	LOG_INFO("hello");

	Hazel::Application* app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
