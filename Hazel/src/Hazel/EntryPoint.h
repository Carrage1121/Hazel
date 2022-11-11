#pragma once

#ifdef  HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	Hazel::Log::GetCoreLogger()->warn("Initialized Log!");
	Hazel::Log::GetClientLogger()->info("Hello Log!");
	printf("Hello Hazel!!\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif //  HZ_PLATFORM_WINDOWS

