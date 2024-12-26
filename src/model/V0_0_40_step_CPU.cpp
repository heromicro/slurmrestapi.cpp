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



#include "slurmrestapi/model/V0_0_40_step_CPU.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_40_step_CPU::V0_0_40_step_CPU()
{
    m_Requested_frequencyIsSet = false;
    m_Governor = utility::conversions::to_string_t("");
    m_GovernorIsSet = false;
}

V0_0_40_step_CPU::~V0_0_40_step_CPU()
{
}

void V0_0_40_step_CPU::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_step_CPU::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Requested_frequencyIsSet)
    {
        val[utility::conversions::to_string_t(U("requested_frequency"))] = ModelBase::toJson(m_Requested_frequency);
    }
    if(m_GovernorIsSet)
    {
        val[utility::conversions::to_string_t(U("governor"))] = ModelBase::toJson(m_Governor);
    }

    return val;
}

bool V0_0_40_step_CPU::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("requested_frequency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("requested_frequency")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_step_CPU_requested_frequency> refVal_setRequestedFrequency;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRequestedFrequency);
            setRequestedFrequency(refVal_setRequestedFrequency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("governor"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("governor")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setGovernor;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGovernor);
            setGovernor(refVal_setGovernor);
        }
    }
    return ok;
}

void V0_0_40_step_CPU::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Requested_frequencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("requested_frequency")), m_Requested_frequency));
    }
    if(m_GovernorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("governor")), m_Governor));
    }
}

bool V0_0_40_step_CPU::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("requested_frequency"))))
    {
        std::shared_ptr<V0_0_40_step_CPU_requested_frequency> refVal_setRequestedFrequency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("requested_frequency"))), refVal_setRequestedFrequency );
        setRequestedFrequency(refVal_setRequestedFrequency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("governor"))))
    {
        utility::string_t refVal_setGovernor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("governor"))), refVal_setGovernor );
        setGovernor(refVal_setGovernor);
    }
    return ok;
}

std::shared_ptr<V0_0_40_step_CPU_requested_frequency> V0_0_40_step_CPU::getRequestedFrequency() const
{
    return m_Requested_frequency;
}

void V0_0_40_step_CPU::setRequestedFrequency(const std::shared_ptr<V0_0_40_step_CPU_requested_frequency>& value)
{
    m_Requested_frequency = value;
    m_Requested_frequencyIsSet = true;
}

bool V0_0_40_step_CPU::requestedFrequencyIsSet() const
{
    return m_Requested_frequencyIsSet;
}

void V0_0_40_step_CPU::unsetRequested_frequency()
{
    m_Requested_frequencyIsSet = false;
}
utility::string_t V0_0_40_step_CPU::getGovernor() const
{
    return m_Governor;
}

void V0_0_40_step_CPU::setGovernor(const utility::string_t& value)
{
    m_Governor = value;
    m_GovernorIsSet = true;
}

bool V0_0_40_step_CPU::governorIsSet() const
{
    return m_GovernorIsSet;
}

void V0_0_40_step_CPU::unsetGovernor()
{
    m_GovernorIsSet = false;
}
}
}
}
}

