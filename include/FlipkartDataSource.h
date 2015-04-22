#ifndef _FLIPKART_DATA_SOURCE_
#define _FLIPKART_DATA_SOURCE_

#include "RemoteDataSource.h"

namespace Tc98
{
	namespace AffliateAnalytics
	{
		class FlipkartDataSource : public RemoteDataSource
		{
<<<<<<< HEAD
		public:
			FlipkartDataSource();
			FlipkartDataSource(const std::string uri, const std::string relativePath, const std::unordered_map<std::string, std::string>::iterator it);
=======
			FlipkartDataSource();
			FlipkartDataSource(const std::string uri, const std::string relativePath, const std::unordered_map<std::string, std::string>::iterator it)
>>>>>>> feab6def9ebea67e0953d2c297badc650a7eae74
			~FlipkartDataSource();

			bool SendRequest();
		};
	}
}

#endif
