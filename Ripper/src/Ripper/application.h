#pragma once

#include "core.h"

namespace Ripper {

	class RIPPER_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	Application* create_application();

}


