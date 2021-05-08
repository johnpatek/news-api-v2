#ifndef NEWSAPI_SOURCE_H
#define NEWSAPI_SOURCE_H
#include "common.h"

namespace newsapi
{

class source
{
public:

    source();

    source(const std::string& buffer);

    source(const source& copy) = delete;

    source(source&& move) = default;
    
    std::string& get_id() const;

    bool has_id() const;

    std::string& get_name() const;

    bool has_name() const;

    std::string& get_descritption() const;

    bool has_description() const;

    void parse(const std::string& buffer);

    
private:
    unique_opaque _source_data;
};

}

#endif