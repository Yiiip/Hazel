#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

//For engine core log macros
#define LOG_CORE_TRACE(...) ::Hazel::Logger::GetCoreLogger()->trace(__VA_ARGS__)
#define LOG_CORE_INFO(...)  ::Hazel::Logger::GetCoreLogger()->info(__VA_ARGS__)
#define LOG_CORE_WARN(...)  ::Hazel::Logger::GetCoreLogger()->warn(__VA_ARGS__)
#define LOG_CORE_ERROR(...) ::Hazel::Logger::GetCoreLogger()->error(__VA_ARGS__)
#define LOG_CORE_FATAL(...) ::Hazel::Logger::GetCoreLogger()->fatal(__VA_ARGS__)

//For client log macros
#define LOG_TRACE(...) ::Hazel::Logger::GetClientLogger()->trace(__VA_ARGS__)
#define LOG_INFO(...)  ::Hazel::Logger::GetClientLogger()->info(__VA_ARGS__)
#define LOG_WARN(...)  ::Hazel::Logger::GetClientLogger()->warn(__VA_ARGS__)
#define LOG_ERROR(...) ::Hazel::Logger::GetClientLogger()->error(__VA_ARGS__)
#define LOG_FATAL(...) ::Hazel::Logger::GetClientLogger()->fatal(__VA_ARGS__)

namespace Hazel {

	class HAZEL_API Logger
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}