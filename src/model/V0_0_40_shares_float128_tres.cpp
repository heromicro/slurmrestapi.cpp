/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_40_shares_float128_tres.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_40_shares_float128_tres::V0_0_40_shares_float128_tres()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Value = 0.0;
    m_ValueIsSet = false;
}

V0_0_40_shares_float128_tres::~V0_0_40_shares_float128_tres()
{
}

void V0_0_40_shares_float128_tres::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_shares_float128_tres::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t(U("value"))] = ModelBase::toJson(m_Value);
    }

    return val;
}

bool V0_0_40_shares_float128_tres::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("value"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("value")));
        if(!fieldValue.is_null())
        {
            double refVal_setValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValue);
            setValue(refVal_setValue);
        }
    }
    return ok;
}

void V0_0_40_shares_float128_tres::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("value")), m_Value));
    }
}

bool V0_0_40_shares_float128_tres::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("value"))))
    {
        double refVal_setValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("value"))), refVal_setValue );
        setValue(refVal_setValue);
    }
    return ok;
}

utility::string_t V0_0_40_shares_float128_tres::getName() const
{
    return m_Name;
}

void V0_0_40_shares_float128_tres::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool V0_0_40_shares_float128_tres::nameIsSet() const
{
    return m_NameIsSet;
}

void V0_0_40_shares_float128_tres::unsetName()
{
    m_NameIsSet = false;
}
double V0_0_40_shares_float128_tres::getValue() const
{
    return m_Value;
}

void V0_0_40_shares_float128_tres::setValue(double value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool V0_0_40_shares_float128_tres::valueIsSet() const
{
    return m_ValueIsSet;
}

void V0_0_40_shares_float128_tres::unsetValue()
{
    m_ValueIsSet = false;
}
}
}
}
}


