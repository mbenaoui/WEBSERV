#include "Configuration.hpp"
std::vector<std::string> search_in_location_vector(std::vector<std::pair<std::string, std::vector<std::string> > > &location, std::string varaible)
{
    int i = 0;
    while (i < location.size())
    {
        if (!location[i].first.compare(varaible))
            return location[i].second;
        i++;
    }
    return std::vector<std::string>();
}

std::string search_in_location_string(std::vector<std::pair<std::string, std::vector<std::string> > > &location, std::string varaible)
{
    int i = 0;
    while (i < location.size())
    {
        if (!location[i].first.compare(varaible))
            return location[i].second[0];
        i++;
    }
    return std::string();
}

Location::Location(Configuration &conf, std::string path)
{
    int i = 0;
    std::map<std::string, std::map<std::string, std::vector<std::string> > >::iterator it = conf.getlocations().begin();
    while (it != conf.getlocations().end())
    {
        if (!it->first.compare(path))
        {
            std::map<std::string, std::vector<std::string> >::iterator it2 = it->second.begin();
            while (it2 != it->second.end())
            {
                if (!it2->first.compare("allow_methods"))
                    this->allow_methods = it2->second;
                if (!it2->first.compare("cgi_execute"))
                    this->cgi_execute = it2->second;
                if (!it2->first.compare("return"))
                    this->_return = it2->second;
                if (!it2->first.compare("cgi_path"))
                    this->cgi_path = it2->second[0];
                if (!it2->first.compare("index"))
                    this->index = it2->second[0];
                if (!it2->first.compare("root"))
                    this->root = it2->second[0];
                if (!it2->first.compare("autoindex"))
                    this->autoindex = it2->second[0];
                it2++;
            }
        }
        it++;
    }
}

std::string Location::getroot()
{
    return this->root;
}

std::string Location::getautoindex()
{
    return this->autoindex;
}

std::vector<std::string> Location::getallow_methods()
{
    return this->allow_methods;
}

std::string Location::getindex()
{
    return this->index;
}

std::string Location::getcgi_path()
{
    return this->cgi_path;
}
std::vector<std::string> Location::getcgi_execute()
{
    return this->cgi_execute;
}

std::vector<std::string> Location::getreturn()
{
    return this->_return;
}

int Location::getlocation_exist()
{
    return this->location_exist;
}