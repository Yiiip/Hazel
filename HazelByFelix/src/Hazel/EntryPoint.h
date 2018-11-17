#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Logger::Init();
	int temp = 666;
	LOG_CORE_WARN("Engine Ready");
	LOG_INFO("hello, Var={0}", temp);

	Hazel::Application* app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
