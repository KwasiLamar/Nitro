#pragma once

#ifdef NTR_PLATFORM_WINDOWS

extern Nitro::Application* Nitro::CreateApplication( );
int main( int argc, char** argv)
{
	printf( "Welcome to the Nitro Engine" );
	auto app = Nitro::CreateApplication();
	app->Run( );
	delete app;
}
#endif // NTR_PLATFORM_WINDOWS