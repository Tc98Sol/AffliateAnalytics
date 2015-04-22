#include "RemoteDataSource.h"

namespace Tc98
{
	namespace AffliateAnalytics
	{
		RemoteDataSource::RemoteDataSource()
		{}

<<<<<<< HEAD
		RemoteDataSource::RemoteDataSource(const std::string uri, const std::string relativePath, const std::unordered_map<std::string, std::string>::iterator it)
		{}

		RemoteDataSource::~RemoteDataSource()
		{}
=======
		RemoteDataSource::RemoteDataSource(const std::string uri, const std::string relativePath, const std::unordered_map<std::string, std::string>::iterator it);
		{}

		//virtual RemoteDataSource::~RemoteDataSource()
>>>>>>> feab6def9ebea67e0953d2c297badc650a7eae74

		std::string GetUri()
		{
			return std::string();
		}

<<<<<<< HEAD
		void RemoteDataSource::SetUri(const std::string)
		{}

		bool RemoteDataSource::IsUriEmty()
=======
		void SetUri(const std::string)
		{}

		bool IsUriEmty()
>>>>>>> feab6def9ebea67e0953d2c297badc650a7eae74
		{
			return true;
		}

<<<<<<< HEAD
		std::string RemoteDataSource::GetRelativePath()
		{
			return std::string();
		}

		void RemoteDataSource::SetRelativePath(const std::string)
=======
		std::string GetRelativePath()
		{
			return std::sting();
		}

		void SetRelativePath(const std::string)
>>>>>>> feab6def9ebea67e0953d2c297badc650a7eae74
		{}

		bool IsRelativePathEmpty()
		{
			return true;
		}
<<<<<<< HEAD
		std::unordered_map<std::string, std::string>::iterator RemoteDataSource::GetQueryMap()
		{
			std::unordered_map<std::string, std::string>::iterator it;
			return it;
		}

		bool RemoteDataSource::AddQueryToQueryMap(const std::string name, const std::string value)
=======
		std::unordered_map<std::string, std::string>::iterator GetQueryMap()
		{
			std::unordered_map<std::string, std::string>::iterator;
		}

		bool AddQueryToQueryMap(const std::string name, const std::string value)
>>>>>>> feab6def9ebea67e0953d2c297badc650a7eae74
		{
			return false;
		}

<<<<<<< HEAD
		bool RemoteDataSource::IsQueryMapEmpty()
		{
			return true;
		}
		bool RemoteDataSource::ClearQueryMap()
=======
		bool IsQueryMapEmpty();
		{
			return true;
		}
		bool ClearQueryMap()
>>>>>>> feab6def9ebea67e0953d2c297badc650a7eae74
		{
			return true;
		}

<<<<<<< HEAD
		bool RemoteDataSource::SendRequest()
=======
		bool SendRequest()
>>>>>>> feab6def9ebea67e0953d2c297badc650a7eae74
		{
			return false;
		}

<<<<<<< HEAD
		void RemoteDataSource::ResponseCallBack()
=======
		void ResponseCallBack()
>>>>>>> feab6def9ebea67e0953d2c297badc650a7eae74
		{}
		
	}
}