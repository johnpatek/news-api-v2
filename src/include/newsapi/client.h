#ifndef NEWSAPI_CLIENT_H
#define NEWSAPI_CLIENT_H

#include "article.h"
#include "common.h"
#include "request.h"
#include "source.h"

namespace newsapi
{

class client
{
public:
    
    client();

    client(const std::string& api_token);

    client(const client& copy) = delete;

    client(client&& copy) = default;

    void get_everything(client& client, everything_request& request, std::vector<article>& articles);

    void get_top_headlines();
};

}

#endif