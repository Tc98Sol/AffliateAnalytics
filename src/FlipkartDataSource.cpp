#include "FlipkartDataSource.h"
<<<<<<< HEAD
#include <cpprest/http_client.h>
#include <cpprest/filestream.h>
=======
>>>>>>> feab6def9ebea67e0953d2c297badc650a7eae74

namespace Tc98
{
	namespace AffliateAnalytics
	{
		FlipkartDataSource::FlipkartDataSource()
		{}

		FlipkartDataSource::FlipkartDataSource(const std::string uri, const std::string relativePath, const std::unordered_map<std::string, std::string>::iterator it)
		{}

		FlipkartDataSource::~FlipkartDataSource()
		{}
<<<<<<< HEAD

		bool FlipkartDataSource::SendRequest()
		{
			web::http::client::http_client client(U("http://www.flipkart.com/"));
			web::http::uri_builder builder(U("/offers"));
			builder.append_query(U("otracker"), U("hp_nmenu_offer-zone"));

			pplx::task<void> requestTask = client.request(web::http::methods::GET, builder.to_string()).then([=](web::http::http_response response)
			{
				if (response.status_code() == 200)
				{
					std::cout << "Ok response received from flipkart" << std::endl;
					//ResponseCallBack();
				}
				else
					std::cout << "Response recieved : " << response.status_code() << std::endl;
				return ;
			});
			return true; //why?
=======
		
		bool FlipkartDataSource::SendRequest()
		{
			return false;
>>>>>>> feab6def9ebea67e0953d2c297badc650a7eae74
		}
	}
}

<<<<<<< HEAD
=======
#endif
>>>>>>> feab6def9ebea67e0953d2c297badc650a7eae74
