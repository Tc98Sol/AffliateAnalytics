#include "RemoteDataSource.h"

namespace Tc98
{
	namespace AffliateAnalytics
	{
		RemoteDataSource::RemoteDataSource()
		{}

		RemoteDataSource::RemoteDataSource(const std::string uri, const std::string relativePath, const std::unordered_map<std::string, std::string>::iterator it)
		{}

		RemoteDataSource::~RemoteDataSource()
		{}

		std::string GetUri()
		{
			return std::string();
		}

		void RemoteDataSource::SetUri(const std::string)
		{}

		bool RemoteDataSource::IsUriEmty()
		{
			return true;
		}

		std::string RemoteDataSource::GetRelativePath()
		{
			return std::string();
		}

		void RemoteDataSource::SetRelativePath(const std::string)
		{}

		bool IsRelativePathEmpty()
		{
			return true;
		}
		std::unordered_map<std::string, std::string>::iterator RemoteDataSource::GetQueryMap()
		{
			std::unordered_map<std::string, std::string>::iterator it;
			return it;
		}

		bool RemoteDataSource::AddQueryToQueryMap(const std::string name, const std::string value)
		{
			return false;
		}

		bool RemoteDataSource::IsQueryMapEmpty()
		{
			return true;
		}
		bool RemoteDataSource::ClearQueryMap()
		{
			return true;
		}

		bool RemoteDataSource::SendRequest()
		{
			return false;
		}

		void RemoteDataSource::ResponseCallBack()
		{}
		
	}
}