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



#include "slurmrestapi/model/Dbv0_0_37_job_state.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_37_job_state::Dbv0_0_37_job_state()
{
    m_Current = utility::conversions::to_string_t("");
    m_CurrentIsSet = false;
    m_Reason = utility::conversions::to_string_t("");
    m_ReasonIsSet = false;
}

Dbv0_0_37_job_state::~Dbv0_0_37_job_state()
{
}

void Dbv0_0_37_job_state::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_37_job_state::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CurrentIsSet)
    {
        val[utility::conversions::to_string_t(U("current"))] = ModelBase::toJson(m_Current);
    }
    if(m_ReasonIsSet)
    {
        val[utility::conversions::to_string_t(U("reason"))] = ModelBase::toJson(m_Reason);
    }

    return val;
}

bool Dbv0_0_37_job_state::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("current"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("current")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCurrent;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCurrent);
            setCurrent(refVal_setCurrent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("reason"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("reason")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setReason;
            ok &= ModelBase::fromJson(fieldValue, refVal_setReason);
            setReason(refVal_setReason);
        }
    }
    return ok;
}

void Dbv0_0_37_job_state::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CurrentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("current")), m_Current));
    }
    if(m_ReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("reason")), m_Reason));
    }
}

bool Dbv0_0_37_job_state::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("current"))))
    {
        utility::string_t refVal_setCurrent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("current"))), refVal_setCurrent );
        setCurrent(refVal_setCurrent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("reason"))))
    {
        utility::string_t refVal_setReason;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("reason"))), refVal_setReason );
        setReason(refVal_setReason);
    }
    return ok;
}

utility::string_t Dbv0_0_37_job_state::getCurrent() const
{
    return m_Current;
}

void Dbv0_0_37_job_state::setCurrent(const utility::string_t& value)
{
    m_Current = value;
    m_CurrentIsSet = true;
}

bool Dbv0_0_37_job_state::currentIsSet() const
{
    return m_CurrentIsSet;
}

void Dbv0_0_37_job_state::unsetCurrent()
{
    m_CurrentIsSet = false;
}
utility::string_t Dbv0_0_37_job_state::getReason() const
{
    return m_Reason;
}

void Dbv0_0_37_job_state::setReason(const utility::string_t& value)
{
    m_Reason = value;
    m_ReasonIsSet = true;
}

bool Dbv0_0_37_job_state::reasonIsSet() const
{
    return m_ReasonIsSet;
}

void Dbv0_0_37_job_state::unsetReason()
{
    m_ReasonIsSet = false;
}
}
}
}
}


