#include "RemoteDataSource.h"

namespace Tc98
{
	namespace AffliateAnalytics
	{
		RemoteDataSource::RemoteDataSource()
		{}

		RemoteDataSource::RemoteDataSource(const std::string uri, const std::string relativePath, const std::unordered_map<std::string, std::string>::iterator it);
		{}

		//virtual RemoteDataSource::~RemoteDataSource()

		std::string GetUri()
		{
			return std::string();
		}

		void SetUri(const std::string)
		{}

		bool IsUriEmty()
		{
			return true;
		}

		std::string GetRelativePath()
		{
			return std::sting();
		}

		void SetRelativePath(const std::string)
		{}

		bool IsRelativePathEmpty()
		{
			return true;
		}
		std::unordered_map<std::string, std::string>::iterator GetQueryMap()
		{
			std::unordered_map<std::string, std::string>::iterator;
		}

		bool AddQueryToQueryMap(const std::string name, const std::string value)
		{
			return false;
		}

		bool IsQueryMapEmpty();
		{
			return true;
		}
		bool ClearQueryMap()
		{
			return true;
		}

		bool SendRequest()
		{
			return false;
		}

		void ResponseCallBack()
		{}
		
	}
}