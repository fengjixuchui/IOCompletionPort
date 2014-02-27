
#ifndef _Configurations_H_
#define _Configurations_H_

#include <log4cplus\logger.h>

namespace Framework
{

	class Configurations
	{
	public:
		// ���� IOBuffer ʱ�Ĵ�С
		static unsigned int BufferSize;
		static log4cplus::Logger* Logger;
		static log4cplus::Logger& GetLogger(){
			return *Logger;
		}
	};

}

#endif
