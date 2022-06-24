#pragma once

#include "Core.h"

namespace Pinscher {

	class PS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//Should be defined in client
	Application* CreateApplication();
}