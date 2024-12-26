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



#include "slurmrestapi/model/V0_0_40_job_array_limits_max_running.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_40_job_array_limits_max_running::V0_0_40_job_array_limits_max_running()
{
    m_Tasks = 0;
    m_TasksIsSet = false;
}

V0_0_40_job_array_limits_max_running::~V0_0_40_job_array_limits_max_running()
{
}

void V0_0_40_job_array_limits_max_running::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_job_array_limits_max_running::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TasksIsSet)
    {
        val[utility::conversions::to_string_t(U("tasks"))] = ModelBase::toJson(m_Tasks);
    }

    return val;
}

bool V0_0_40_job_array_limits_max_running::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("tasks"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tasks")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTasks;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTasks);
            setTasks(refVal_setTasks);
        }
    }
    return ok;
}

void V0_0_40_job_array_limits_max_running::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TasksIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tasks")), m_Tasks));
    }
}

bool V0_0_40_job_array_limits_max_running::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("tasks"))))
    {
        int32_t refVal_setTasks;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tasks"))), refVal_setTasks );
        setTasks(refVal_setTasks);
    }
    return ok;
}

int32_t V0_0_40_job_array_limits_max_running::getTasks() const
{
    return m_Tasks;
}

void V0_0_40_job_array_limits_max_running::setTasks(int32_t value)
{
    m_Tasks = value;
    m_TasksIsSet = true;
}

bool V0_0_40_job_array_limits_max_running::tasksIsSet() const
{
    return m_TasksIsSet;
}

void V0_0_40_job_array_limits_max_running::unsetTasks()
{
    m_TasksIsSet = false;
}
}
}
}
}


