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



#include "slurmrestapi/model/V0_0_40_step_statistics_CPU.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_40_step_statistics_CPU::V0_0_40_step_statistics_CPU()
{
    m_Actual_frequency = 0L;
    m_Actual_frequencyIsSet = false;
}

V0_0_40_step_statistics_CPU::~V0_0_40_step_statistics_CPU()
{
}

void V0_0_40_step_statistics_CPU::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_step_statistics_CPU::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Actual_frequencyIsSet)
    {
        val[utility::conversions::to_string_t(U("actual_frequency"))] = ModelBase::toJson(m_Actual_frequency);
    }

    return val;
}

bool V0_0_40_step_statistics_CPU::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("actual_frequency"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("actual_frequency")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setActualFrequency;
            ok &= ModelBase::fromJson(fieldValue, refVal_setActualFrequency);
            setActualFrequency(refVal_setActualFrequency);
        }
    }
    return ok;
}

void V0_0_40_step_statistics_CPU::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Actual_frequencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("actual_frequency")), m_Actual_frequency));
    }
}

bool V0_0_40_step_statistics_CPU::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("actual_frequency"))))
    {
        int64_t refVal_setActualFrequency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("actual_frequency"))), refVal_setActualFrequency );
        setActualFrequency(refVal_setActualFrequency);
    }
    return ok;
}

int64_t V0_0_40_step_statistics_CPU::getActualFrequency() const
{
    return m_Actual_frequency;
}

void V0_0_40_step_statistics_CPU::setActualFrequency(int64_t value)
{
    m_Actual_frequency = value;
    m_Actual_frequencyIsSet = true;
}

bool V0_0_40_step_statistics_CPU::actualFrequencyIsSet() const
{
    return m_Actual_frequencyIsSet;
}

void V0_0_40_step_statistics_CPU::unsetActual_frequency()
{
    m_Actual_frequencyIsSet = false;
}
}
}
}
}


