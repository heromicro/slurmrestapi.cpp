/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.38
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/Dbv0_0_38_tres_list_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_38_tres_list_inner::Dbv0_0_38_tres_list_inner()
{
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_Count = 0;
    m_CountIsSet = false;
}

Dbv0_0_38_tres_list_inner::~Dbv0_0_38_tres_list_inner()
{
}

void Dbv0_0_38_tres_list_inner::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_38_tres_list_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_CountIsSet)
    {
        val[utility::conversions::to_string_t(U("count"))] = ModelBase::toJson(m_Count);
    }

    return val;
}

bool Dbv0_0_38_tres_list_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("count"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("count")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCount);
            setCount(refVal_setCount);
        }
    }
    return ok;
}

void Dbv0_0_38_tres_list_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("count")), m_Count));
    }
}

bool Dbv0_0_38_tres_list_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        int32_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("count"))))
    {
        int32_t refVal_setCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("count"))), refVal_setCount );
        setCount(refVal_setCount);
    }
    return ok;
}

utility::string_t Dbv0_0_38_tres_list_inner::getType() const
{
    return m_Type;
}

void Dbv0_0_38_tres_list_inner::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool Dbv0_0_38_tres_list_inner::typeIsSet() const
{
    return m_TypeIsSet;
}

void Dbv0_0_38_tres_list_inner::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t Dbv0_0_38_tres_list_inner::getName() const
{
    return m_Name;
}

void Dbv0_0_38_tres_list_inner::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Dbv0_0_38_tres_list_inner::nameIsSet() const
{
    return m_NameIsSet;
}

void Dbv0_0_38_tres_list_inner::unsetName()
{
    m_NameIsSet = false;
}
int32_t Dbv0_0_38_tres_list_inner::getId() const
{
    return m_Id;
}

void Dbv0_0_38_tres_list_inner::setId(int32_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Dbv0_0_38_tres_list_inner::idIsSet() const
{
    return m_IdIsSet;
}

void Dbv0_0_38_tres_list_inner::unsetId()
{
    m_IdIsSet = false;
}
int32_t Dbv0_0_38_tres_list_inner::getCount() const
{
    return m_Count;
}

void Dbv0_0_38_tres_list_inner::setCount(int32_t value)
{
    m_Count = value;
    m_CountIsSet = true;
}

bool Dbv0_0_38_tres_list_inner::countIsSet() const
{
    return m_CountIsSet;
}

void Dbv0_0_38_tres_list_inner::unsetCount()
{
    m_CountIsSet = false;
}
}
}
}
}

