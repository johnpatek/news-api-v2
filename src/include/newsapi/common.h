#ifndef NEWSAPI_COMMON_H
#define NEWSAPI_COMMON_H

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>

#include <vector>

namespace newsapi
{
    using unique_opaque = std::unique_ptr<void,std::function<void(void*)>>;
}

#endif