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
	// ����һ����ȷ��ʵ��
	return new Sandbox();
}