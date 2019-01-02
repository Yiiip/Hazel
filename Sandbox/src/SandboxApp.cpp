#include <Hazel.h>

class ExampleLayer : public Hazel::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		LOG_INFO("ExampleLayer::Update");
	}

	void OnEvent(Hazel::Event& event) override
	{
		LOG_TRACE("{0}", event);
	}
};

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}

private:

};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}
