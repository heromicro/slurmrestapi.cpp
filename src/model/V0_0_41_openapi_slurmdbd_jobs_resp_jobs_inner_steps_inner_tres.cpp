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



#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres()
{
    m_RequestedIsSet = false;
    m_ConsumedIsSet = false;
    m_AllocatedIsSet = false;
}

V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::~V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres()
{
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RequestedIsSet)
    {
        val[utility::conversions::to_string_t(U("requested"))] = ModelBase::toJson(m_Requested);
    }
    if(m_ConsumedIsSet)
    {
        val[utility::conversions::to_string_t(U("consumed"))] = ModelBase::toJson(m_Consumed);
    }
    if(m_AllocatedIsSet)
    {
        val[utility::conversions::to_string_t(U("allocated"))] = ModelBase::toJson(m_Allocated);
    }

    return val;
}

bool V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("requested"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("requested")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested> refVal_setRequested;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRequested);
            setRequested(refVal_setRequested);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("consumed"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("consumed")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_consumed> refVal_setConsumed;
            ok &= ModelBase::fromJson(fieldValue, refVal_setConsumed);
            setConsumed(refVal_setConsumed);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("allocated"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("allocated")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>> refVal_setAllocated;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAllocated);
            setAllocated(refVal_setAllocated);
        }
    }
    return ok;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_RequestedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("requested")), m_Requested));
    }
    if(m_ConsumedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("consumed")), m_Consumed));
    }
    if(m_AllocatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("allocated")), m_Allocated));
    }
}

bool V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("requested"))))
    {
        std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested> refVal_setRequested;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("requested"))), refVal_setRequested );
        setRequested(refVal_setRequested);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("consumed"))))
    {
        std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_consumed> refVal_setConsumed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("consumed"))), refVal_setConsumed );
        setConsumed(refVal_setConsumed);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("allocated"))))
    {
        std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>> refVal_setAllocated;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("allocated"))), refVal_setAllocated );
        setAllocated(refVal_setAllocated);
    }
    return ok;
}

std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested> V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::getRequested() const
{
    return m_Requested;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::setRequested(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested>& value)
{
    m_Requested = value;
    m_RequestedIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::requestedIsSet() const
{
    return m_RequestedIsSet;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::unsetRequested()
{
    m_RequestedIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_consumed> V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::getConsumed() const
{
    return m_Consumed;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::setConsumed(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_consumed>& value)
{
    m_Consumed = value;
    m_ConsumedIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::consumedIsSet() const
{
    return m_ConsumedIsSet;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::unsetConsumed()
{
    m_ConsumedIsSet = false;
}
std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::getAllocated()
{
    return m_Allocated;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::setAllocated(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres_requested_max_inner>>& value)
{
    m_Allocated = value;
    m_AllocatedIsSet = true;
}

bool V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::allocatedIsSet() const
{
    return m_AllocatedIsSet;
}

void V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner_tres::unsetAllocated()
{
    m_AllocatedIsSet = false;
}
}
}
}
}


