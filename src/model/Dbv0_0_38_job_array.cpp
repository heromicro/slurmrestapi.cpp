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



#include "slurmrestapi/model/Dbv0_0_38_job_array.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Dbv0_0_38_job_array::Dbv0_0_38_job_array()
{
    m_Job_id = 0;
    m_Job_idIsSet = false;
    m_LimitsIsSet = false;
    m_Task = utility::conversions::to_string_t("");
    m_TaskIsSet = false;
    m_Task_id = 0;
    m_Task_idIsSet = false;
}

Dbv0_0_38_job_array::~Dbv0_0_38_job_array()
{
}

void Dbv0_0_38_job_array::validate()
{
    // TODO: implement validation
}

web::json::value Dbv0_0_38_job_array::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Job_idIsSet)
    {
        val[utility::conversions::to_string_t(U("job_id"))] = ModelBase::toJson(m_Job_id);
    }
    if(m_LimitsIsSet)
    {
        val[utility::conversions::to_string_t(U("limits"))] = ModelBase::toJson(m_Limits);
    }
    if(m_TaskIsSet)
    {
        val[utility::conversions::to_string_t(U("task"))] = ModelBase::toJson(m_Task);
    }
    if(m_Task_idIsSet)
    {
        val[utility::conversions::to_string_t(U("task_id"))] = ModelBase::toJson(m_Task_id);
    }

    return val;
}

bool Dbv0_0_38_job_array::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("job_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("job_id")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setJobId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setJobId);
            setJobId(refVal_setJobId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("limits"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("limits")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Dbv0_0_38_job_array_limits> refVal_setLimits;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLimits);
            setLimits(refVal_setLimits);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("task"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("task")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTask;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTask);
            setTask(refVal_setTask);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("task_id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("task_id")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTaskId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTaskId);
            setTaskId(refVal_setTaskId);
        }
    }
    return ok;
}

void Dbv0_0_38_job_array::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Job_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("job_id")), m_Job_id));
    }
    if(m_LimitsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("limits")), m_Limits));
    }
    if(m_TaskIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("task")), m_Task));
    }
    if(m_Task_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("task_id")), m_Task_id));
    }
}

bool Dbv0_0_38_job_array::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("job_id"))))
    {
        int32_t refVal_setJobId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("job_id"))), refVal_setJobId );
        setJobId(refVal_setJobId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("limits"))))
    {
        std::shared_ptr<Dbv0_0_38_job_array_limits> refVal_setLimits;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("limits"))), refVal_setLimits );
        setLimits(refVal_setLimits);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("task"))))
    {
        utility::string_t refVal_setTask;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("task"))), refVal_setTask );
        setTask(refVal_setTask);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("task_id"))))
    {
        int32_t refVal_setTaskId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("task_id"))), refVal_setTaskId );
        setTaskId(refVal_setTaskId);
    }
    return ok;
}

int32_t Dbv0_0_38_job_array::getJobId() const
{
    return m_Job_id;
}

void Dbv0_0_38_job_array::setJobId(int32_t value)
{
    m_Job_id = value;
    m_Job_idIsSet = true;
}

bool Dbv0_0_38_job_array::jobIdIsSet() const
{
    return m_Job_idIsSet;
}

void Dbv0_0_38_job_array::unsetJob_id()
{
    m_Job_idIsSet = false;
}
std::shared_ptr<Dbv0_0_38_job_array_limits> Dbv0_0_38_job_array::getLimits() const
{
    return m_Limits;
}

void Dbv0_0_38_job_array::setLimits(const std::shared_ptr<Dbv0_0_38_job_array_limits>& value)
{
    m_Limits = value;
    m_LimitsIsSet = true;
}

bool Dbv0_0_38_job_array::limitsIsSet() const
{
    return m_LimitsIsSet;
}

void Dbv0_0_38_job_array::unsetLimits()
{
    m_LimitsIsSet = false;
}
utility::string_t Dbv0_0_38_job_array::getTask() const
{
    return m_Task;
}

void Dbv0_0_38_job_array::setTask(const utility::string_t& value)
{
    m_Task = value;
    m_TaskIsSet = true;
}

bool Dbv0_0_38_job_array::taskIsSet() const
{
    return m_TaskIsSet;
}

void Dbv0_0_38_job_array::unsetTask()
{
    m_TaskIsSet = false;
}
int32_t Dbv0_0_38_job_array::getTaskId() const
{
    return m_Task_id;
}

void Dbv0_0_38_job_array::setTaskId(int32_t value)
{
    m_Task_id = value;
    m_Task_idIsSet = true;
}

bool Dbv0_0_38_job_array::taskIdIsSet() const
{
    return m_Task_idIsSet;
}

void Dbv0_0_38_job_array::unsetTask_id()
{
    m_Task_idIsSet = false;
}
}
}
}
}


