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



#include "slurmrestapi/model/V0_0_41_job_desc_msg_time_minimum.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_41_job_desc_msg_time_minimum::V0_0_41_job_desc_msg_time_minimum()
{
    m_set = false;
    m_setIsSet = false;
    m_Infinite = false;
    m_InfiniteIsSet = false;
    m_number = 0;
    m_numberIsSet = false;
}

V0_0_41_job_desc_msg_time_minimum::~V0_0_41_job_desc_msg_time_minimum()
{
}

void V0_0_41_job_desc_msg_time_minimum::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_job_desc_msg_time_minimum::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_setIsSet)
    {
        val[utility::conversions::to_string_t(U("set"))] = ModelBase::toJson(m_set);
    }
    if(m_InfiniteIsSet)
    {
        val[utility::conversions::to_string_t(U("infinite"))] = ModelBase::toJson(m_Infinite);
    }
    if(m_numberIsSet)
    {
        val[utility::conversions::to_string_t(U("number"))] = ModelBase::toJson(m_number);
    }

    return val;
}

bool V0_0_41_job_desc_msg_time_minimum::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("set"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("set")));
        if(!fieldValue.is_null())
        {
            bool refVal_setSet;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSet);
            setSet(refVal_setSet);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("infinite"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("infinite")));
        if(!fieldValue.is_null())
        {
            bool refVal_setInfinite;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInfinite);
            setInfinite(refVal_setInfinite);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("number"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("number")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNumber);
            setNumber(refVal_setNumber);
        }
    }
    return ok;
}

void V0_0_41_job_desc_msg_time_minimum::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_setIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("set")), m_set));
    }
    if(m_InfiniteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("infinite")), m_Infinite));
    }
    if(m_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("number")), m_number));
    }
}

bool V0_0_41_job_desc_msg_time_minimum::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("set"))))
    {
        bool refVal_setSet;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("set"))), refVal_setSet );
        setSet(refVal_setSet);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("infinite"))))
    {
        bool refVal_setInfinite;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("infinite"))), refVal_setInfinite );
        setInfinite(refVal_setInfinite);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("number"))))
    {
        int32_t refVal_setNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("number"))), refVal_setNumber );
        setNumber(refVal_setNumber);
    }
    return ok;
}

bool V0_0_41_job_desc_msg_time_minimum::isSet() const
{
    return m_set;
}

void V0_0_41_job_desc_msg_time_minimum::setSet(bool value)
{
    m_set = value;
    m_setIsSet = true;
}

bool V0_0_41_job_desc_msg_time_minimum::setIsSet() const
{
    return m_setIsSet;
}

void V0_0_41_job_desc_msg_time_minimum::unsetset()
{
    m_setIsSet = false;
}
bool V0_0_41_job_desc_msg_time_minimum::isInfinite() const
{
    return m_Infinite;
}

void V0_0_41_job_desc_msg_time_minimum::setInfinite(bool value)
{
    m_Infinite = value;
    m_InfiniteIsSet = true;
}

bool V0_0_41_job_desc_msg_time_minimum::infiniteIsSet() const
{
    return m_InfiniteIsSet;
}

void V0_0_41_job_desc_msg_time_minimum::unsetInfinite()
{
    m_InfiniteIsSet = false;
}
int32_t V0_0_41_job_desc_msg_time_minimum::getNumber() const
{
    return m_number;
}

void V0_0_41_job_desc_msg_time_minimum::setNumber(int32_t value)
{
    m_number = value;
    m_numberIsSet = true;
}

bool V0_0_41_job_desc_msg_time_minimum::numberIsSet() const
{
    return m_numberIsSet;
}

void V0_0_41_job_desc_msg_time_minimum::unsetnumber()
{
    m_numberIsSet = false;
}
}
}
}
}


