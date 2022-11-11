#include <Hazel.h>
class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Hazel::Application* Hazel::CreateApplication()
{
	// 返回一个正确的实例
	return new Sandbox();
}