/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/Dbv0_0_37_coordinator_info.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_37_coordinator_info::Dbv0_0_37_coordinator_info()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Direct = 0;
    m_DirectIsSet = false;
}

Dbv0_0_37_coordinator_info::~Dbv0_0_37_coordinator_info()
{
}

void Dbv0_0_37_coordinator_info::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_37_coordinator_info::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_DirectIsSet)
    {
        val[utility::conversions::to_string_t(U("direct"))] = ModelBase::toJson(m_Direct);
    }

    return val;
}

bool Dbv0_0_37_coordinator_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("direct"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("direct")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setDirect;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDirect);
            setDirect(refVal_setDirect);
        }
    }
    return ok;
}

void Dbv0_0_37_coordinator_info::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_DirectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("direct")), m_Direct));
    }
}

bool Dbv0_0_37_coordinator_info::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("direct"))))
    {
        int32_t refVal_setDirect;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("direct"))), refVal_setDirect );
        setDirect(refVal_setDirect);
    }
    return ok;
}

utility::string_t Dbv0_0_37_coordinator_info::getName() const
{
    return m_Name;
}

void Dbv0_0_37_coordinator_info::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Dbv0_0_37_coordinator_info::nameIsSet() const
{
    return m_NameIsSet;
}

void Dbv0_0_37_coordinator_info::unsetName()
{
    m_NameIsSet = false;
}
int32_t Dbv0_0_37_coordinator_info::getDirect() const
{
    return m_Direct;
}

void Dbv0_0_37_coordinator_info::setDirect(int32_t value)
{
    m_Direct = value;
    m_DirectIsSet = true;
}

bool Dbv0_0_37_coordinator_info::directIsSet() const
{
    return m_DirectIsSet;
}

void Dbv0_0_37_coordinator_info::unsetDirect()
{
    m_DirectIsSet = false;
}
}
}
}
}


