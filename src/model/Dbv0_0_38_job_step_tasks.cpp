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



#include "slurmrestapi/model/Dbv0_0_38_job_step_tasks.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_38_job_step_tasks::Dbv0_0_38_job_step_tasks()
{
    m_Count = 0;
    m_CountIsSet = false;
}

Dbv0_0_38_job_step_tasks::~Dbv0_0_38_job_step_tasks()
{
}

void Dbv0_0_38_job_step_tasks::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_38_job_step_tasks::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CountIsSet)
    {
        val[utility::conversions::to_string_t(U("count"))] = ModelBase::toJson(m_Count);
    }

    return val;
}

bool Dbv0_0_38_job_step_tasks::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

void Dbv0_0_38_job_step_tasks::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("count")), m_Count));
    }
}

bool Dbv0_0_38_job_step_tasks::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("count"))))
    {
        int32_t refVal_setCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("count"))), refVal_setCount );
        setCount(refVal_setCount);
    }
    return ok;
}

int32_t Dbv0_0_38_job_step_tasks::getCount() const
{
    return m_Count;
}

void Dbv0_0_38_job_step_tasks::setCount(int32_t value)
{
    m_Count = value;
    m_CountIsSet = true;
}

bool Dbv0_0_38_job_step_tasks::countIsSet() const
{
    return m_CountIsSet;
}

void Dbv0_0_38_job_step_tasks::unsetCount()
{
    m_CountIsSet = false;
}
}
}
}
}


