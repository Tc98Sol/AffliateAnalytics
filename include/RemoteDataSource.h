#ifndef _REMOTE_DATA_SOURCE_
#define _REMOTE_DATA_SOURCE_

#include <string>
#include <unordered_map>

namespace Tc98
{
	namespace AffliateAnalytics
	{
		class RemoteDataSource
		{
		public:
			RemoteDataSource();
			RemoteDataSource(const std::string uri, const std::string relativePath, const std::unordered_map<std::string, std::string>::iterator it);
			virtual ~RemoteDataSource() = 0;

			std::string GetUri();
			void SetUri(const std::string);
			bool IsUriEmty();
			std::string GetRelativePath();
			void SetRelativePath(const std::string);
			bool IsRelativePathEmpty();
			std::unordered_map<std::string, std::string>::iterator GetQueryMap();
			bool AddQueryToQueryMap(const std::string name, const std::string value);
			bool IsQueryMapEmpty();
			bool ClearQueryMap();

			virtual bool SendRequest();
			void ResponseCallBack(); //it should be an interface

		protected:
			std::string _uri;
			std::string _relativePath; //should be like "/offers"
			std::unordered_map < std::string, std::string> _queryMap;
		};
	}
}

#endif
