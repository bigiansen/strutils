#include <strutils/strutils.hpp>

#include <algorithm>

namespace strutils
{
    std::vector<std::string> split(const std::string& str, char delim)
    {
        std::vector<std::string> result;

        std::string::const_iterator it = str.cbegin();
        for(;;)
        {
            std::string::const_iterator found_it = std::find(it, str.end(), delim);
            if(found_it == str.end()) 
            { 
                break;
            }
            else
            {
                if(it != found_it)
                {
                    result.push_back(std::string(it, found_it));
                }
                it = ++found_it;
            }
        }
        if(it != str.end())
        {
            result.push_back(std::string(it, str.end()));
        }

        return result;
    }

    std::vector<std::string> split(std::string_view str, char delim)
    {
        std::vector<std::string> result;

        std::string_view::const_iterator it = str.cbegin();
        for(;;)
        {
            std::string_view::const_iterator found_it = std::find(it, str.end(), delim);
            if(found_it == str.end()) 
            { 
                break;
            }
            else
            {
                if(it != found_it)
                {
                    result.push_back(std::string(it, found_it));
                }
                it = ++found_it;
            }
        }
        if(it != str.end())
        {
            result.push_back(std::string(it, str.end()));
        }

        return result;
    }

    std::vector<std::string_view> split_views(const std::string& str, char delim)
    {
        std::vector<std::string_view> result;

        std::string::const_iterator it = str.cbegin();
        for(;;)
        {
            std::string::const_iterator found_it = std::find(it, str.end(), delim);
            if(found_it == str.end()) 
            { 
                break;
            }
            else
            {
                if(it != found_it)
                {
                    result.push_back(std::string_view(&(*it), std::distance(found_it, it)));
                }
                it = ++found_it;
            }
        }
        if(it != str.end())
        {
            result.push_back(std::string_view(&(*it), std::distance(str.end(), it)));
        }

        return result;
    }
}